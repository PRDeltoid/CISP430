#include <iostream>
#include <string>

using namespace std;

#define SIZE 20

struct DataItem {
   int data;   
   int key;
};

struct DataItem* hash_array[SIZE]; 
struct DataItem* item;
int hashCode(int key);
struct DataItem* search(int key);
void insert(int key, int data);
void display();
void menu();

int main() {
    //Show user the interaction menu
    menu();

    /*Create a test hash table
    insert(1, 20);
    insert(2, 70);
    insert(42, 80);
    insert(4, 25);
    insert(12, 44);
    insert(14, 32);
    insert(17, 11);
    insert(13, 78);
    insert(37, 97);*/

    /*Search Tests
    item = search(37);
    if(item != NULL) {
        cout << "Element found: " << item->data << endl;
    } else {
        cout << "Element not found" << endl;
    }

    item = search(100);
    if(item != NULL) {
        cout << "Element found: " << item->data << endl;
    } else {
        cout << "Element not found" << endl;
    }*/
}

void menu() {
    int choice;
    cout << "1. Insert\n2. Delete\n3. Search\n4. Display\n5. Exit\n";

    DataItem* item = NULL;
    int data;
    int key;
    int index;
    while(true) {
        cout << "Choice: ";
        cin >> choice;
        
        switch(choice) {
            //Insert
            case(1):
                cout << "Please enter key: ";
                cin >> key;
                cout << "Please enter data: ";
                cin >> data;
                insert(key, data);
                break;
            //Delete
            case(2):
                cout << "Please enter key to delete: ";
                cin >> key;

                item = search(key);
                if(item != NULL) {
                    index = hashCode(key);
                    hash_array[index] = NULL;
                    delete item;
                } else { 
                    cout << "Item not found." << endl;
                }
                break;
            //Search
            case(3):
                cout << "Please enter key to search: ";
                cin >> key;

                item = search(key);
                if(item != NULL) {
                    cout << "Element found: " << item->data << endl;
                } else {
                    cout << "Element not found" << endl;
                }
                break;
            //Display
            case(4):
                display();
                break;
            //Exit
            case(5):
                return;
            default:
                cout << "Invalid input." << endl;
                break;
        }
    }
}

//Simple modulo hash
int hashCode(int key) {
    return key % SIZE;
}

struct DataItem *search(int key) {
    //get the hash 
    int hashIndex = hashCode(key);  
    //move in array until an empty 
    while(hash_array[hashIndex] != NULL) {
        if(hash_array[hashIndex]->key == key) {
            return hash_array[hashIndex]; 
        }
        //go to next cell
        ++hashIndex;
        //wrap around the table
        hashIndex %= SIZE;
    }        
    return NULL;        
}

void insert(int key,int data) {
    struct DataItem *item = new DataItem;
    item->data = data;  
    item->key = key;
    //get the hash 
    int hashIndex = hashCode(key);
    //move in array until an empty or deleted cell (open addressing)
    while(hash_array[hashIndex] != NULL && hash_array[hashIndex]->key != -1) {
        //go to next cell
        hashIndex++;
        //wrap around the table
        hashIndex %= SIZE;
    }
    hash_array[hashIndex] = item;
}

void display() {
    int i = 0;
    for(i = 0; i < SIZE; i++) {
        if(hash_array[i] != NULL) {
            cout << hash_array[i]->key << ":" << hash_array[i]->data << " ";
        } else {
            cout << " ~~ ";
        }
    }
    cout<< endl;
}
