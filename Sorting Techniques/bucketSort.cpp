#include <iostream>
#include <vector>
using namespace std;
// bucket sort to sort an array of students
class Student
{
public:
    int marks;
    string name;
};

void bucketSort(Student s[], int n)
{
    // assuming marks in a range 0 - 100
    vector<Student> v[101];

    // O(N) times
    for (int i = 0; i < n; i++)
    {
        int m = s[i].marks;
        v[m].push_back(s[i]);
    }

    //  iterate over the vector and print the statements
    for (int i = 100; i >= 0; i--)
    {
        for (vector<Student>::iterator it = v[i].begin(); it != v[i].end(); it++)
        {
            cout << (*it).marks << " " << (*it).name << endl;
        }
    }
}

int main()
{
    Student s[10000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].marks >> s[i].name;
    }
    bucketSort(s, n);

    return 0;
}