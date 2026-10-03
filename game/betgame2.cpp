#include <iostream>
#include <random> //0 4  5x5
using namespace std;

int rd(int min,int max)
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(min,max);   //random between o to 2 
    int rnd = dist(gen);
    return rnd;
}

pair<int,int> rnd_row_col()
{
    int rnd_row;
    int rnd_col;
    rnd_row = rnd_row = rd(0,4);
    rnd_col = rnd_col = rd(0,4);
    return {rnd_row,rnd_col};
}

int main () {
    system("powershell -Command \"[Console]::OutputEncoding = [System.Text.Encoding]::UTF8\"");
    float bet_amount;
    cout << "Enter bet amount : " ; cin >> bet_amount;

    vector<vector<string>> box = 
    {
        {" ?"," ?"," ?"," ?"," ?"},
        {" ?"," ?"," ?"," ?"," ?"},
        {" ?"," ?"," ?"," ?"," ?"},
        {" ?"," ?"," ?"," ?"," ?"},
        {" ?"," ?"," ?"," ?"," ?"},  
    };
      
    pair<int,int> bomb = rnd_row_col();
    cout << bomb.first << endl ;    //usable with matrix
    cout << bomb.second << endl ;

    bool matrix[5][5] = {{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
    matrix[bomb.first][bomb.second] = 1;   //deployed one bomb


    int row , column ;
    int take = 1;

    

    while (take < 25)
    {
        for(auto x : box) //display box
        {
            cout << "     ";
            for(auto v : x )
            {
                cout << v << "  " ;
            }
            cout << endl ;
        }
        cout << endl ;

        cout << "enter row " ;  cin >> row ;
        cout << "enter column " ;  cin >> column ;
        if (matrix[row][column] == true)
        {
            box[row][column] = "💣";
            for(auto x : box) //display box
            {
                cout << "     ";
                for(auto v : x )
                {
                    cout << v << "  " ;
                }
                cout << endl ;
            }
            cout << endl ;
            cout << "💥 BOOM! GAME OVER!\nYou picked the wrong box.\n💸 Bet lost: ₹" << bet_amount << "\n";                     
            break;
        }
        else
        {
            box[row][column] = " ✓";
            for(auto x : box) //display box
            {
                cout << "      ";
                for(auto v : x )
                {
                    cout << v << "  " ;
                }
                cout << endl ;
            }
            cout << endl ;
            bet_amount += bet_amount*(10.0/100); //20/100 is wrong
            cout << "\n✅ SAFE PICK!\n🎉 You survived this round!\n💰 Current winnings: ₹" << bet_amount << "\n\n"; 
            take++;
        }
        // take++;
        
        cout << "Enter your choice\n";
        cout << "1. Pick another\n2. Quit" ; int choice; cin >> choice;
        if(choice == 2) 
        {
            cout << "💰 CASH OUT SUCCESSFULLY!\nYou won ₹" << bet_amount << ". 🎉\nThanks for playing! 👋";
            break;
        }

    }

    // cout << "\ntake : " << take ;
}

// UTF encoding
// [Console]::OutputEncoding = [System.Text.Encoding]::UTF8