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

int main () 
{
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
      
    pair<int,int> bomb = rnd_row_col();  //giving two vals to one var
    pair<int,int> bomb2 = rnd_row_col();
    pair<int,int> bomb3 = rnd_row_col(); //bug it can generate bomb which is already at that place so it could be fixed
    
    cout << bomb.first << endl ;    //usable with matrix (first,second)
    cout << bomb.second << endl ;

    cout << bomb2.first << endl ;    
    cout << bomb2.second << endl ;

    cout << bomb3.first << endl ;   
    cout << bomb3.second << endl ;

    bool matrix[5][5] = {{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
    
    matrix[bomb.first][bomb.second] = 1;   // 1 deploys one bomb
    matrix[bomb2.first][bomb2.second] = 1;   // 1 deploys one bomb
    matrix[bomb3.first][bomb3.second] = 1;   // 1 deploys one bomb


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
        cout << "enter column " ;  cin >> column ; cout << endl ;
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
            cout  << "🎉You won ₹" << bet_amount << ".\n"
                  << "💰 CASH OUT SUCCESSFULLY!\n"
                  << "Thanks for playing! 👋";
                  break;
        }

    }

    // cout << "\ntake : " << take ;
}

// UTF encoding
// [Console]::OutputEncoding = [System.Text.Encoding]::UTF8