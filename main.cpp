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


int main() {
    // Contact list
    vector <Contacts> directory = {
        {"Burnice White", "467-333-9122", "Sister"},
        {"Jane Doe", "559-100-3456", "Wife"},
        {"Grace Howard", "559-100-3456", "Close Friend"},
        {"Emily Williams", "559-010-5678", "College Friend"},
        {"David Johnson", "559-010-9012", "Brother"},       
        {"Jessica Taylor", "559-070-7890", "Old Supervisor"},
        {"Chris Evans", "559-111-8899", "Childhood Friend"},
        {"Amanda White", "559-100-3456", "Next Door Neighbor"},
        {"Linda Martinez", "559-100-3456", "Co-worker"},
        {"James Wilson", "559-100-3456", "Cousin"},       
        {"Dr. Alan Gonzalez", "559-100-3456", "Current Doctor"},
        {"Anthony Ruiz", "559-100-3456", "Landlord"},
        {"Jayden Lee", "559-100-3456", "Mechanic"},
        {"Seth Rogan", "559-100-3456", "Friend"},
        {"Michael Ruiz", "559-666-8887", "Friend"},
        {"Jason Johnson", "559-522-6556", "Older Brother"},
    };

    cout << "--------------- Easy Contact Finder ---------------\n" << endl;

    // Searching by name
    string searchLetter;
    cout << "Enter the first letter of this persons name: ";
    cin >> searchLetter;

    if (!searchLetter.empty()) {
        searchLetter[0] = toupper(searchLetter[0]);
    }

    vector <Contacts> firstResults;
    for (const auto& person : directory) {
        if (person.name.substr(0, 1) == searchLetter) {
            firstResults.push_back(person);
        }
    }

    // Category Searching 
    cout << "Are you looking for a Family member? (Y for YES/N for NO): ";
    string familyMem;
    cin >> familyMem;

    cout << "\n--------------- Search Results ---------------\n";
    bool found = false;
    for (const auto& person : firstResults) {
        if (familyMem == "Y" && person.category == "Family") {
            cout << "All Possible Matches: " << person.name << " : "
            << person.phone << " : " << person.category << endl;
            found = true;
        }
        else if (familyMem == "N") {
            cout << "->  " << person.name << " : " << person.phone 
            << " : " << person.category << endl;
            found = true;
        }
    }

    if (!found) cout << "No contacts in the system match your search!!!\n";




    return 0;
}
