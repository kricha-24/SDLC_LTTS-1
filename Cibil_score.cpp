#include<iostream>
using namespace std;

int main()
{
int cibil_score;

cout << "Enter your CIBIL Score-\n";
cin >> cibil_score;

if ((cibil_score >= 300) && (cibil_score <550)) {
cout << "Poor Score";
}else if ((cibil_score >= 550) && (cibil_score <700)) {
cout << "Low CIBIL Score";
}else if ((cibil_score >= 700) && (cibil_score <750)) {
cout << "Eligible for loan";
}else if ((cibil_score >= 750) && (cibil_score <900)) {
cout << "Good CIBIL Score";
}

return 0;
}
