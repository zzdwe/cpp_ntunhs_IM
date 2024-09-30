#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;

    cout << "請問您最近是否發燒(y/n)=>";
    cin >> s;

    if (s == "n")
    {
        cout << "先生您可能正常" << endl;
    }
    else
    {
        cout << "請問您最近是否咳嗽(y/n)=>";
        cin >> s;

        if (s == "n")
        {
            cout << "請問您最近是否高血壓(y/n)=>";
            cin >> s;

            if (s == "n")
            {
                cout << "請問您最近是否盜汗(y/n)=>";
                cin >> s;

                if (s == "n")
                {
                    cout << "先生請轉診其他系統" << endl;
                }
                else
                {
                    cout << "先生您可能得肺病" << endl;
                }
            }
            else
            {
                cout << "請問您最近是否口乾(y/n)=>";
                cin >> s;

                if (s == "n")
                {
                    cout << "先生請轉診其他系統" << endl;
                }
                else
                {
                    cout << "先生您可能得肝病" << endl;
                }
            }
        }
        else
        {
            cout << "請問您最近是否疲倦(y/n)=>";
            cin >> s;

            if (s == "n")
            {
                cout << "先生請轉診其他系統" << endl;
            }
            else
            {
                cout << "先生您可能得感冒" << endl;
            }
        }
    }

    return 0;
}
