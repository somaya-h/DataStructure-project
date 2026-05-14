#include <iostream>
using namespace std;

class hospitalSystem {
private:	

struct Node {
    string name;
    string status;
    Node* next;
};
Node* head;

public:
	hospitalSystem(){
		head = NULL ;
	}

// Function to serve the next waiting patient
void serveNextPatient()
{
    // Check if the list is empty
    if (head == NULL)
    {
        cout << "No patients waiting." << endl;
        return;
    }

    // Start from the first node
    Node* current = head;

    // Traverse the linked list
    while (current != NULL)
    {
        // Check if patient is waiting
        if (current->status == "Waiting")
        {
            // Change status to Served
            current->status = "Served";

            // Display served patient name
            cout << "Patient served: " << current->name << endl;

            return;
        }

        // Move to the next node
        current = current->next;
    }

    // If no waiting patient exists
    cout << "No waiting patients found." << endl;
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

// This function displays all waiting patients
void displayWaitingPatients() {

    // Start from the first node
    Node* temp = head;

    // Variable to check if any waiting patient exists
    bool found = false;

    cout << "\n--- Waiting Patients ---" << endl;

    // Traverse the linked list
    while (temp != NULL) {

        // Check if patient status is "Waiting"
        if (temp->status == "Waiting") {
            cout << "Patient Name: " << temp->name << endl;
            found = true;
        }

        // Move to the next node
        temp = temp->next;
    }

    // If no waiting patients found
    if (!found) {
        cout << "No waiting patients." << endl;
    }
}
};

int main(){
	
	
	return 0;
}
