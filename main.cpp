#include <iostream>
#include <string>
using namespace std;

int main(){
    int numStudents;
    
    cout << "Enter the number of students: ";
    cin >> numStudents;

    cin.ignore();

    string studentNames[numStudents];
    string studentIDs[numStudents];

    for (int i= 0; i < numStudents; i++){
        cout<<"\nEnter Details for Student "<< i + 1 << endl;

        cout << "Enter Name: ";
        getline(cin>>ws, studentNames[i]);

        bool isDuplicate;
            do{
                isDuplicate=false;
                cout<< "Enter ID number: ";
                getline(cin>>ws, studentIDs[i]);

                for (int j=0; j< i; j++){
                    if (studentIDs[i] == studentIDs[j]){
                        cout << "Error: ID " << studentIDs[i] << " is already taken! Please enter your ID.\n" << endl;
                        isDuplicate = true;
                        break;
                    }

                }
            } while (isDuplicate);

    }

    cout<<"\n===== STUDENT DIRECTORY =====" << endl;
    for (int i = 0; i < numStudents; i++) {
    cout << "Student " << i + 1 << endl;
    cout << "Name: " << studentNames[i] << endl;
    cout << "ID: " << studentIDs[i] << endl;
    cout << "-------------------" << endl;
    }
return 0;
}
