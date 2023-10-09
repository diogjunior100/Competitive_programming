#include<bits/stdc++.h>

using namespace std;

int main()
{
    int round, count;
    string s, t;

    while (cin >> round)
    {
        if (round < 0)
        {
            break;
        }
        
        cin >> s;
        cin >> t;
        count = 0;

        for (int i = 0; i < t.size(); i++)
        {
            auto it = s.find(t[i]);

            if (it != string::npos)
            {
                while (it != string::npos)
                {
                    s.erase(it, 1);
                    it = s.find(t[i]);
                }
            }
            else
            {
                count++;
            }
            
            if (count > 6 || s.empty())
            {
                break;
            }
        }

        cout << "Round " << round << endl;

        if (count == 7) 
        {
            cout << "You lose." << endl;
        }
        else if (s.empty()) 
        {
            cout << "You win." << endl;
        }
        else 
        {
            cout << "You chickened out." << endl;
        }
        

    }
    
    
    return 0;
}