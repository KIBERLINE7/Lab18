#include <iostream>
#include <vector>

using namespace std;

void zd1() {

    int n;

    cout << "Enter size array : ";

    cin >> n;

    vector<int> A(n);
    vector<int> B(n);

    cout << "Enter elements array A : ";

    for (int i = 0; i < n; i++)
        cin >> A[i];

    cout << "Enter elements array B : ";

    for (int i = 0; i < n; i++)
        cin >> B[i];

    int buf;

    for (int i = 0; i < n; i++) {

        buf = A[i];

        A[i] = B[i];
        B[i] = buf;

    }

    cout << "Array A : ";

    for (int i = 0; i < n; i++) {

        cout << A[i] << " ";

    }

    cout << "\n" << "Array B : ";

    for (int i = 0; i < n; i++) {
        cout << B[i] << " ";
    }

    return;
}

void zd2() {

    int n;

    cout << "Enter size array : ";

    cin >> n;

    vector<int> A(n);
    vector<double> B(n);

    cout << "Enter elements array A : ";

    for (int i = 0; i < n; i++)
        cin >> A[i];

    for (int k = 0; k < n; k++) {

        double sum = 0;

        for (int i = 0; i <= k; i++) {

            sum += A[i];

        }

        B[k] = sum / (k + 1);

    }

    cout << "Complete" << endl;

    cout << "Display array B ? Y/N ";

    string s;

    cin >> s;

    if (s == "Y") {

        cout << "Elements array B : ";

        for (int i = 0; i < n; i++) {
            cout << B[i] << " ";
        }

    }
    else {
        cout << "OK";
    }

    return;
}

void zd3() {

    int n;

    cout << "Enter size array : ";

    cin >> n;

    vector<int> A(n);

    cout << "Enter elements array A : ";

    int d = 0;

    for (int i = 0; i < n; i++) {

        cin >> A[i];

        if (A[i] % 2 != 0 && A[i] != 0)
            d = A[i];

    }

    if (d != 0) {

        for (int i = 0; i < n; i++) {

            if (A[i] % 2 != 0 && A[i] != 0)
                A[i] += d;

        }

    }

    cout << "Complete" << endl;

    cout << "Display array A ? Y/N ";

    string s;

    cin >> s;

    if (s == "Y") {

        cout << "Elements array A : ";

        for (int i = 0; i < n; i++) {
            cout << A[i] << " ";
        }

    }
    else {
        cout << "OK";
    }
    

    return;
}

void zd4() {

    int n;

    cout << "Enter size array : ";

    cin >> n;

    vector<int> A(n);

    cout << "Enter elements array A : ";

    int max = -1e8 , min = 1e8 , max_pos , min_pos;

    for (int i = 0; i < n; i++) {

        cin >> A[i];

        if (A[i] >= max) {
            max = A[i];
            max_pos = i;
        }

        if (A[i] <= min) {
            min = A[i];
            min_pos = i;
        }

    }

    if (max_pos >= min_pos) {

        for (int i = min_pos + 1; i < max_pos; i++)
            A[i] = 0;

    }
    else {

        for (int i = max_pos + 1; i < min_pos ; i++)
            A[i] = 0;

    }

    

    cout << "Complete" << endl;

    cout << "Display array A ? Y/N ";

    string s;

    cin >> s;

    if (s == "Y") {

        cout << "Elements array A : ";

        for (int i = 0; i < n; i++) {
            cout << A[i] << " ";
        }

    }
    else {
        cout << "OK";
    }


    return;
}

void zd5() {

    int n;

    cout << "Enter size array : ";

    cin >> n;

    vector<int> A(n);

    cout << "Enter elements array A : ";

    int pos , c;

    for (int i = 0; i < n; i++) {

        cin >> A[i];

        if (i > 0) {
            if (A[i] < A[i - 1]) {
                pos = i;
                c = A[i];
            }
        }

    }

    A.erase(A.begin() + pos);

    A.insert(A.begin(), c);


    cout << "Complete" << endl;

    cout << "Display array A ? Y/N ";

    string s;

    cin >> s;

    if (s == "Y") {

        cout << "Elements array A : ";

        for (int i = 0; i < n; i++) {
            cout << A[i] << " ";
        }

    }
    else {
        cout << "OK";
    }


    return;
}

int main()
{

    int t;

    cout << "Enter the job number : ";

    cin >> t;
    
    switch (t)
    {
    case 1 :
        zd1();
        break;

    case 2:
        zd2();
        break;

    case 3:
        zd3();
        break;

    case 4:
        zd4();
        break;

    case 5:
        zd5();
        break;

    default:
        break;
    }

    return 0;

}