// CSCI-40 Final Project
// Author: Gerardo Reyna... 

/* 
 * Description: This project will be able to find a desired contact. Mainly by 
 * Allowing you to filter out a list or group of contacts either by phone number, your
 * relationship to this specific person or by simply searching the first letter in the
 * name of the person you are looking for.
 *
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;


struct Contacts {
    string name;
    string phone;
    string category;
};

bool checkIfFam(const string& category) {
    return (category == "Sister" ||
        category == "Wife" ||
        category == "Younger Brother" ||
        category == "Older Brother" ||
        category == "Cousin");
}


int main() {
    // Contact list
    const int ALL_CONTACTS = 24;
    Contacts directory[ALL_CONTACTS] = {
        {"Burnice White", "467-333-9122", "Sister"},
        {"Jane Doe", "559-100-3456", "Wife"},
        {"Grace Howard", "559-100-3456", "Close Friend"},
        {"Emily Williams", "559-010-5678", "College Friend"},
        {"David Johnson", "559-010-9012", "Younger Brother"},       
        {"Jessica Taylor", "559-070-7890", "Old Supervisor"},
        {"Chris Evans", "559-111-8899", "Childhood Friend"},
        {"Amanda White", "559-100-3456", "Next Door Neighbor"},
        {"Linda Martinez", "559-100-3456", "Co-worker"},
        {"James Wilson", "559-100-3456", "Cousin"},       
        {"Dr. Alan Gonzalez", "559-100-3456", "Current Doctor"},
        {"Anthony Ruiz", "559-100-3456", "Old Landlord"},
        {"Jayden Lee", "559-100-3456", "Mechanic"},
        {"Seth Rogan", "559-100-3456", "Friend"},
        {"Michael Ruiz", "559-666-8887", "Friend"},
        {"Jason Johnson", "559-522-6556", "Older Brother"},
        {"Marcus Higgins", "559-123-4567", "Old Colleague"},
        {"Luis Torres", "555-987-6543", "Best College friend"},
        {"Leo Ramirez", "555-246-8135", "Childhood Friend"},
        {"Brenda Patel", "559-522-6556", "Current Property Manager"},
        {"Kevin Brien", "559-522-6556", "Statistics Colleague"},
        {"Alia Khan", "559-522-6556", "Childhood Neighbor"},
        {"Elizabeth Jenkins", "559-522-6556", "Sister-In-Law"},
        {"Alex Sterling", "555-159-3570", "Music Video Acquaintance"},
    };

    cout << "--------------- Easy Contact Finder ---------------\n" << endl;

    // Searching by name
    string searchLetter;
    cout << "Enter the first letter of this persons name: ";
    cin >> searchLetter;

    if (!searchLetter.empty()) {
        searchLetter[0] = toupper(searchLetter[0]);
    }

    
    // Category Searching 
    char familyMem;
    cout << "Are you looking for a Family member? (Y for YES/N for NO): ";
    cin >> familyMem;
    familyMem = toupper(familyMem);


    cout << "\n--------------- Search Results ---------------\n";
    bool found = false;
    for (int i = 0; i < ALL_CONTACTS; ++i) {
        if (!directory[i].name.empty() && directory[i].name.substr(0, 1) == searchLetter) {
            bool isFamily = checkIfFam(directory[i].category);
            if (familyMem == 'Y' && isFamily) {
                cout << "Matching Contacts: " << directory[i].name << " : " << directory[i].phone
                    << " : " << directory[i].category << endl;
                found = true;
            }
        

    
            else if (familyMem == 'N' && !isFamily) {
                cout << "->  " << directory[i].name << " : " << directory[i].phone << " : " << 
                directory[i].category << endl;
                found = true;
            }
        }
    }

    if (!found) {
        cout << "No contacts in the system match your search!!!\n";
    }



    return 0;
}
