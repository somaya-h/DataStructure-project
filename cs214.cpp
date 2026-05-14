#include <iostream>
using namespace std;

struct Node {
    string name;
    string status;
    Node* next;
};

Node* head = NULL;



// This function displays all patients
void displayAllPatients() {

    // Start from the first node
    Node* temp = head;

    // Check if list is empty
    if (temp == NULL) {
        cout << "No patients available.\n";
        return;
    }

    cout << "All Patients:\n";

    // Traverse the linked list
    while (temp != NULL) {

        // Print patient name
        cout << temp->name << endl;

        // Move to the next node
        temp = temp->next;
    }
}


// This function counts served patients
int countServedPatients() {

    // Start from the first node
    Node* temp = head;

    // Variable to store the count
    int count = 0;

    // Traverse the linked list
    while (temp != NULL) {

        // Check if patient status is "Served"
        if (temp->status == "Served") {
            count++;
        }

        // Move to the next node
        temp = temp->next;
    }

    // Return total served patients
    return count;
}

