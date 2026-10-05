#include <iostream>
using namespace std;

int main()
{
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;

    cout << "Enter marks of English: ";
    cin >> m1;

    cout << "Enter marks of Maths: ";
    cin >> m2;

    cout << "Enter marks of Science: ";
    cin >> m3;

    cout << "Enter marks of Computer: ";
    cin >> m4;

    cout << "Enter marks of Hindi: ";
    cin >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    cout << "\nTotal marks = " << total;
    cout << "\nPercentage = " << percentage << "%";

    if (percentage >= 90)
        cout << "\nGrade = A";

    else if (percentage >= 80)
        cout << "\nGrade = B";

    else if (percentage >= 70)
        cout << "\nGrade = C";

    else if (percentage >= 60)
        cout << "\nGrade = D";

    else if (percentage >= 40)
        cout << "\nGrade = E";

    else
        cout << "\nGrade = Fail";

    return 0;
}
