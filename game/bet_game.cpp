#include <iostream>
#include <random>
using namespace std;

int rd(int min,int max)
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(min,max);   //random between o to 2 
    int rnd = dist(gen);
    return rnd;
}

pair<int,int> rnd_row_col(int matrix_size)
{
    int rnd_row;
    int rnd_col;
    rnd_row = rnd_row = rd(0,matrix_size-1);
    rnd_col = rnd_col = rd(0,matrix_size-1);
    return {rnd_row,rnd_col};
}

int main () {

    int matrix_size = 0;
    int bombs = 0;
    int board;
    int difficulty;
    cout << "Enter board level between 1 to 3 : "; cin >> board; 
    cout << "Enter difficulty level between 1 to 3 : "; cin >> difficulty;        
    if(board == 1)
    {
        matrix_size = 3;
    }
    else if(board == 2)
    {
        matrix_size = 4;
    }
    else if(board == 3)
    {
        matrix_size = 5;
    }
    else
    {
        return 0;
    }

    if(difficulty == 1) //board 1 
    {
        if(matrix_size == 3)
        {
            bombs = 1;
            cout << "deployed " << bombs << " bomb";
        }
        else if(matrix_size == 4)
        {
            bombs = 2;
            cout << "deployed " << bombs << " bomb";
        }
        else if(matrix_size == 5)
        {
            bombs = 3;
            cout << "deployed " << bombs << " bomb";
        }
    }
    else if(difficulty == 2)
    {
        if(matrix_size == 3)
        {
            bombs = 2;
            cout << "deployed " << bombs << " bomb";
        }
        else if(matrix_size == 4)
        {
            bombs = 4;
            cout << "deployed " << bombs << " bomb";
        }
        else if(matrix_size == 5)
        {
            bombs = 6;
            cout << "deployed " << bombs << " bomb";
        }
    }
    else if(difficulty == 3)
    {
        if(matrix_size == 3)
        {
            bombs = 3;
            cout << "deployed " << bombs << " bomb";
        }
        else if(matrix_size == 4)
        {
            bombs = 6;
            cout << "deployed " << bombs << " bomb";
        }
        else if(matrix_size == 5)
        {
            bombs = 9;
            cout << "deployed " << bombs << " bomb";
        }
    }
    else
    {
        return 0;
    }
   
    
    system("powershell -Command \"[Console]::OutputEncoding = [System.Text.Encoding]::UTF8\"");
    float bet_amount;
    cout << "\nEnter bet amount : " ; cin >> bet_amount;
    
    // vector<vector<bool>> box = {
    //     {false,false,false},
    //     {false,false,false},
    //     {false,false,false}
    // };

    // vector<vector<string>> box = 
    // {
    //     {" ?"," ?"," ?"},
    //     {" ?"," ?"," ?"},
    //     {" ?"," ?"," ?"}    
    // }; 

    vector<vector<string>> box(matrix_size, vector<string>(matrix_size, " ?"));
     
    vector<pair<int,int>> bomb;
    
    // bool matrix[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
    vector<vector<bool>> matrix(matrix_size, vector<bool>(matrix_size, 0));
    
    cout << endl ;
    for(int i = 0; i < bombs; i++)
    {
        pair<int,int> bomb_i = rnd_row_col(matrix_size);
        if(find(bomb.begin(),bomb.end(),bomb_i))
        bomb.push_back(bomb_i);
        cout << "Deployed at coordinate : " <<  bomb_i.first << " , " ;    //usable with matrix
        cout <<  bomb_i.second << endl ;
        matrix[bomb_i.first][bomb_i.second] = 1;   //deployed one bomb
    } ; cout << endl ;

    int row , column ;
    int take = 1;

    while (take < matrix_size*matrix_size-bombs)//rep 0
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
            if(take == 5) 
            {
                cout << "\033[92mBoard clear all rewards are cleard from pool\n";
            }
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