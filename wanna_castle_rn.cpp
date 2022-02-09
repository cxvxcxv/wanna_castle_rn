#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int castle = 1;
int buy25[30] = {400, 900, 1500, 3000, 6000, 10000, 15000, 30000, 35000, 50000, 55555, 60000, 64000, 68000, 70000, 73000, 77000, 80000, 900000, 100000, 115000, 125000, 135000, 147000, 150000, 160000, 170000, 180000, 190000, 200000};
int lvl25 = 0;

long double coins = 0;

long double tpr[11] = {1, 2, 3, 7, 9, 11, 13, 25, 30, 35, 35};
string tprs[10] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "MAX"};
long double buy1[10] = {50, 150, 320, 600, 770, 900, 1500, 2000, 2999, 0};
int lvl1 = 0;
int up1 = 1;
bool doublecoins = 0;

long double mth1[11] = {10, 20, 30, 35, 40, 60, 70, 150, 200, 250, 250};
long double mth2[11] = {30, 50, 70, 85, 95, 150, 250, 500, 750, 1000, 1000};
long double mth3[11] = {70, 100, 130, 155, 180, 325, 550, 1100, 1500, 2100, 2100};
long double mth4[11] = {100, 150, 200, 300, 400, 800, 1000, 2300, 2900, 3500, 3500};
string mths[10] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "MAX"};

long double buy2[10] = {700, 1500, 2000, 2900, 4000, 7000, 10000, 15000, 20000, 0};

int lvl2 = 0;
int up2 = 1;

long double intu1[11] = {300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 750};
long double intu2[11] = {500, 650, 800, 950, 1150, 1300, 1450, 1600, 1750, 1900, 1900};
long double intu3[11] = {1000, 1500, 2000, 2500, 3000, 3500, 4000, 4500, 5000, 5500, 5500};
string intus[10] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "MAX"};

int buy3[10] = {10000, 12000, 18000, 25000, 27000, 30000, 35000, 40000, 45000, 0};

int lvl3 = 0;
int up3 = 1;

int reac[11] = {500, 1000, 1700, 2500, 3500, 4500, 6000, 8000, 10000, 13000, 10};
string reacs[10] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "MAX"};
int lvl4 = 0;
int up4 = 1;
int buy4[10] = {5000, 10000, 17000, 25000, 35000, 45000, 60000, 70000, 80000, 0};


void tower()
{
    char a[20][41];
    for (int i = 0; i < 19; i++)
        {
            for (int j = 0; j < 40; j++)
            {
                if (i == 6 or i == 18) a[i][j] = '*';
                else if (j == 0 or j == 39) a[i][j] = '*';
                else a[i][j] = ' ';
            }

        }

        for (int i = 0; i <= 5; i++)
        {
            a[i][0] = ' ';
            a[i][39] = ' ';
        }

        for (int i = 0; i < 19; i++)
        {
            a[i][15] = '*';
            a[i][25] = '*';
        }

        a[5][1] = '*';
        a[5][2] = '*';
        a[5][3] = '*';
        a[6][2] = ' ';
        a[5][5] = '*';
        a[5][6] = '*';
        a[5][7] = '*';
        a[5][9] = '*';
        a[5][10] = '*';
        a[5][11] = '*';
        a[6][6] = ' ';
        a[6][10] = ' ';
        a[5][28] = '*';
        a[5][29] = '*';
        a[5][30] = '*';
        a[6][29] = ' ';
        a[5][32] = '*';
        a[5][33] = '*';
        a[5][34] = '*';
        a[5][36] = '*';
        a[5][37] = '*';
        a[5][38] = '*';
        a[6][37] = ' ';
        a[6][33] = ' ';
        a[0][16] = '*';
        a[0][17] = '*';
        a[1][17] = '*';
        a[1][18] = '*';
        a[1][19] = '*';
        a[0][19] = '*';
        a[0][20] = '*';
        a[0][21] = '*';
        a[1][21] = '*';
        a[1][22] = '*';
        a[1][23] = '*';
        a[0][23] = '*';
        a[0][24] = '*';
        a[0][25] = '*';
        a[9][8] = '*';
        a[9][9] = '*';
        a[10][7] = '*';
        a[11][7] = '*';
        a[12][7] = '*';
        a[13][8] = '*';
        a[13][9] = '*';
        a[13][10] = '*';
        a[10][10] = '*';
        a[11][10] = '*';
        a[12][10] = '*';
        a[13][7] = '*';
        a[9][30] = '*';
        a[9][31] = '*';
        a[10][29] = '*';
        a[11][29] = '*';
        a[12][29] = '*';
        a[13][29] = '*';
        a[13][30] = '*';
        a[13][31] = '*';
        a[13][32] = '*';
        a[12][32] = '*';
        a[11][32] = '*';
        a[10][32] = '*';

        for (int i = 11; i<= 19; i++)
        {
            a[i][17] = '*';
            a[i][20] = '*';
            a[i][23] = '*';
        }
        a[10][18] = '*';
        a[9][19] = '*';
        a[9][20] = '*';
        a[9][20] = '*';
        a[10][20] = '*';
        a[9][21] = '*';
        a[10][22] = '*';

        for (int i = 7; i <= 18; i++)
        {
            a[i][1] = '*';
        }

        for (int j = 16; j<= 24; j++)
        {
            a[6][j] = ' ';
        }
    char b[5][40];

     for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 39; j++)
            {
                b[i][j] = ' ';
            }
        }
    for (int i = 0; i < 5; i++)
    {
        b[i][11] = '*';
        b[i][27] = '*';
    }
    char d[7][40];

     for (int i = 0; i < 7; i++)
        {
            for (int j = 0; j < 39; j++)
            {
                d[i][j] = ' ';
            }
        }
    for (int i = 3; i < 7; i++)
    {
        d[i][5] = '*';
        d[i][11] = '*';
    }
    if (castle >= 25)
    {
        system ("cls");
        return;
    }
    system ("cls");
    if (castle < 5)
    {
        for (int i = 1; i<= 33; i++)
        {
            cout << endl;
        }
        char c[13][40];
        for (int i = 0; i < 13; i++)
        {
            for (int j = 0; j < 40; j++)
            {
                if (i == 0 or i == 12) c[i][j] = '*';
                else if (j == 0 or j == 39) c[i][j] = '*';
                else c[i][j] = ' ';
            }

        }
        for (int i = 0; i < 13; i++)
        {
            for (int l = 1; l<= 70; l++)
        {
            cout << ' ';
        }
            for (int j = 0; j < 40; j++)
            {
                cout << setw(2) << c[i][j];
            }
            cout << endl;
        }
    }
    else if (castle < 10)
    {
        for (int i = 1; i<= 27; i++)
        {
            cout << endl;
        }


        for (int i = 0; i < 19; i++)
        {
            for (int l = 1; l<= 70; l++)
            {
                cout << ' ';
            }
            for (int j = 1; j < 40; j++)
            {
                cout << setw(2) << a[i][j];
            }
            cout << endl;
        }
    }
    else if (castle < 15)
    {
        for (int i = 1; i <= 22; i++)
        {
            cout << endl;
        }


        for (int i = 0; i < 6; i++)
        {
            a[i][12] = '*';
            a[i][28] = '*';
        }

        for (int i = 12; i < 15; i++)
        {
            b[0][i] = '*';
        }

        for (int i = 14; i < 17; i++)
        {
            b[1][i] = '*';
        }
        for (int i = 16; i < 19; i++)
        {
            b[0][i] = '*';
        }
        for (int i = 18; i < 21; i++)
        {
            b[1][i] = '*';
        }
        for (int i = 20; i < 23; i++)
        {
            b[0][i] = '*';
        }
        for (int i = 22; i < 25; i++)
        {
            b[1][i] = '*';
        }
        for (int i = 24; i < 27; i++)
        {
            b[0][i] = '*';
        }

        for (int i = 0; i < 5; i++)
        {
            for (int l = 1; l<= 70; l++)
            {
                cout << ' ';
            }
            for (int j = 0; j < 39; j++)
            {
                cout << setw(2) << b[i][j];
            }
            cout << endl;
        }

            for (int i = 0; i < 19; i++)
        {
            for (int l = 1; l<= 70; l++)
            {
                cout << ' ';
            }
            for (int j = 1; j < 40; j++)
            {
                cout << setw(2) << a[i][j];
            }
            cout << endl;
        }
    }

    else if (castle < 20)
    {

        for (int i = 0; i < 6; i++)
        {
            a[i][12] = '*';
            a[i][28] = '*';
        }

        for (int i = 0; i < 5; i++)
        {
            b[i][5] = '*';
            b[i][11] = '*';
            a[i][6] = '*';
        }

        for (int i = 4; i < 13; i++)
        {
            d[4][i] = '*';
        }

        for (int i = 5; i < 12; i++)
        {
            d[3][i] = '*';
        }

        for (int i = 6; i < 11; i++)
        {
            d[2][i] = '*';
        }

        for (int i = 7; i < 10; i++)
        {
            d[1][i] = '*';
        }

        d[0][8] = '*';

        for (int i = 12; i < 15; i++)
        {
            b[0][i] = '*';
        }

        for (int i = 14; i < 17; i++)
        {
            b[1][i] = '*';
        }
        for (int i = 16; i < 19; i++)
        {
            b[0][i] = '*';
        }
        for (int i = 18; i < 21; i++)
        {
            b[1][i] = '*';
        }
        for (int i = 20; i < 23; i++)
        {
            b[0][i] = '*';
        }
        for (int i = 22; i < 25; i++)
        {
            b[1][i] = '*';
        }
        for (int i = 24; i < 27; i++)
        {
            b[0][i] = '*';
        }

        for (int i = 1; i <= 15; i++)
        {
            cout << endl;
        }
        for (int i = 0; i < 7; i++)
        {
            for (int l = 1; l<= 70; l++)
            {
                cout << ' ';
            }
            for (int j = 0; j < 39; j++)
            {
                cout << setw(2) << d[i][j];
            }
            cout << endl;
        }

        for (int i = 0; i < 5; i++)
        {
            for (int l = 1; l<= 70; l++)
            {
                cout << ' ';
            }
            for (int j = 0; j < 39; j++)
            {
                cout << setw(2) << b[i][j];
            }
            cout << endl;
        }

        for (int i = 0; i < 19; i++)
        {
            for (int l = 1; l<= 70; l++)
            {
                cout << ' ';
            }
            for (int j = 1; j < 40; j++)
            {
                cout << setw(2) << a[i][j];
            }
            cout << endl;
        }
    }
    else if (castle < 25)
    {
        d[6][8] = '*';
        b[0][9] = '*';
        b[0][7] = '*';
        b[1][7] = '*';
        b[1][9] = '*';
        b[2][7] = '*';
        b[2][8] = '*';
        b[2][9] = '*';

        d[6][30] = '*';
        b[0][31] = '*';
        b[0][29] = '*';
        b[1][29] = '*';
        b[1][31] = '*';
        b[2][29] = '*';
        b[2][30] = '*';
        b[2][31] = '*';
        for (int i = 3; i < 7; i++)
        {
            d[i][27] = '*';
            d[i][33] = '*';
        }
        for (int i = 0; i < 6; i++)
        {
            a[i][34] = '*';
            a[i][12] = '*';
        }

        for (int i = 0; i < 5; i++)
        {
            b[i][5] = '*';
            b[i][11] = '*';
            a[i][6] = '*';
            b[i][27] = '*';
            b[i][33] = '*';
            a[i][28] = '*';
        }

        for (int i = 4; i < 13; i++)
        {
            d[4][i] = '*';
        }
        for (int i = 26; i < 35; i++)
        {
            d[4][i] = '*';
        }
        for (int i = 5; i < 12; i++)
        {
            d[3][i] = '*';
        }
        for (int i = 27; i < 34; i++)
        {
            d[3][i] = '*';
        }
        for (int i = 6; i < 11; i++)
        {
            d[2][i] = '*';
        }
        for (int i = 28; i < 33; i++)
        {
            d[2][i] = '*';
        }
        for (int i = 7; i < 10; i++)
        {
            d[1][i] = '*';
        }
        for (int i = 29; i < 32; i++)
        {
            d[1][i] = '*';
        }
        d[0][8] = '*';
        d[0][30] = '*';
        for (int i = 12; i < 15; i++)
        {
            b[0][i] = '*';
        }

        for (int i = 14; i < 17; i++)
        {
            b[1][i] = '*';
        }
        for (int i = 16; i < 19; i++)
        {
            b[0][i] = '*';
        }
        for (int i = 18; i < 21; i++)
        {
            b[1][i] = '*';
        }
        for (int i = 20; i < 23; i++)
        {
            b[0][i] = '*';
        }
        for (int i = 22; i < 25; i++)
        {
            b[1][i] = '*';
        }
        for (int i = 24; i < 27; i++)
        {
            b[0][i] = '*';
        }

        for (int i = 1; i <= 15; i++)
        {
            cout << endl;
        }
        for (int i = 0; i < 7; i++)
        {
            for (int l = 1; l<= 70; l++)
            {
                cout << ' ';
            }
            for (int j = 0; j < 39; j++)
            {
                cout << setw(2) << d[i][j];
            }
            cout << endl;
        }

        for (int i = 0; i < 5; i++)
        {
            for (int l = 1; l<= 70; l++)
            {
                cout << ' ';
            }
            for (int j = 0; j < 39; j++)
            {
                cout << setw(2) << b[i][j];
            }
            cout << endl;
        }

        for (int i = 0; i < 19; i++)
        {
            for (int l = 1; l<= 70; l++)
            {
                cout << ' ';
            }
            for (int j = 1; j < 40; j++)
            {
                cout << setw(2) << a[i][j];
            }
            cout << endl;
        }


    }

    cout << "coins: " << coins << endl;
    cout << "castle lvl: " << castle << endl << endl;
    cout << "1. castle upgrade" << endl  << endl << "price: " << buy25[lvl25] << endl;
    cout << "2. menu" << endl << endl;
    string gg;
    cout << "number: ";
    for (int i = 1; i <= 999999; i++)
    {
        cin >> gg;
        if (gg == "2")
        {
            system ("cls");
            return;
            break;
        }
        else if (gg == "1")
        {
            if (coins >= buy25[lvl25])
            {
                coins -= buy25[lvl25];
                lvl25++;
                castle++;
                tower();
                break;
            }
            else
            {
                cout << "not enough coins" << endl << endl;
                cout << "number: ";
            }
        }
        else cout << "wrong number" << endl << endl << "number: ";
    }
}

void shop()
{
    system ("cls");
    cout << "SHOP" << endl << lvl1<< endl;
    cout << "coins: " << coins << endl << endl;
    cout << "1. typer boost (lvl " << tprs[lvl1] << ")" << endl;
    cout << "after every type you get: " << tpr[lvl1] << " --> " << tpr[up1] << " coins" << endl;
    cout << "price: " << buy1[lvl1] << " coins" << endl << endl;

    cout << "1.1 typer x2" << endl;
    cout << "doubles your coins after every type for 10 seconds" << endl;
    cout << "price: " << buy1[lvl1] / 2 << " coins" << endl << endl;

    if (castle >= 3)
    {
        cout << "2. math++ (lvl " << mths[lvl2] << ")" << endl;
        cout << "easy: after every correct answer you get: " << mth1[lvl2] << " --> " << mth1[up2] << " coins" << endl;
        cout << "medium: after every correct answer you get: " << mth2[lvl2] << " --> " << mth2[up2] << " coins" << endl;
        cout << "hard: after every correct answer you get: " << mth3[lvl2] << " --> " << mth3[up2] << " coins" << endl;
        cout << "very hard: after every correct answer you get: " << mth4[lvl2] << " --> " << mth4[up2] << " coins" << endl;
        cout << "price: " << buy2[lvl2] << " coins" << endl << endl;
    }

    if (castle >= 7)
    {
        cout << "3.intuition cashup (lvl " << intus[lvl3] << ")" << endl;
        cout << "easy: after every correct guess you get: " << intu1[lvl3] << " --> " << intu1[up3] << " coins" << endl;
        cout << "medium: after every correct guess you get: " << intu2[lvl3] << " --> " << intu2[up3] << " coins" << endl;
        cout << "hard: after every correct guess you get: " << intu3[lvl3] << " --> " << intu3[up3] << " coins" << endl;
        cout << "price: " << buy3[lvl3] << " coins" << endl << endl;
    }


    if (castle >= 11)
    {
        cout << "4. REACTive (lvl " << reacs[lvl4] << ")" << endl;
        cout << "after every correct answer you get: " << reac[lvl4] << " --> " << reac[up4] << " coins" << endl;
        cout << "price: " << buy4[lvl4] << " coins" << endl << endl;
        cout << "number: ";
    }
    cout << "25. CASTLE (lvl " << castle << ")" << endl << endl;
    cout << "999. exit" << endl << endl;


    for (int i = 1; i<= 99999; i++)
    {
        string buy;
        cin >> buy;
        if (buy == "999")
        {
            system ("cls");
            return;
        }
        else if (buy == "25")
        {
            tower();
            break;
        }
        else if (buy == "1")
        {
            if (castle >= 0 && lvl1 <= 1 && coins >= buy1[lvl1])
            {
                coins -= buy1[lvl1];
                lvl1++;
                up1++;
                shop();
                break;
            }
            if (castle >= 1 && lvl1 <= 3 && coins >= buy1[lvl1])
            {
                coins -= buy1[lvl1];
                lvl1++;
                up1++;
                shop();
                break;
            }
            if (castle >= 2 && lvl1 <= 5 && coins >= buy1[lvl1])
            {
                coins -= buy1[lvl1];
                lvl1++;
                up1++;
                shop();
                break;
            }
            if (castle >= 8 && lvl1 <= 9 && coins >= buy1[lvl1] && lvl1 != 9)
            {
                coins -= buy1[lvl1];
                lvl1++;
                up1++;
                shop();
                break;
            }
            else
            {
                cout << "not enough coins/low caslte lvl/MAX lvl boost" << endl << endl;
                cout << "number: ";
            }
        }

        else if (buy == "1.1" && coins >= buy1[lvl1] / 2)
        {
            if (doublecoins != 0)
            {
                cout << "you already have a boost!" << endl << endl;
                cout << "number: ";

            }
            else
            {
                coins -= buy1[lvl1] / 2;
                doublecoins = 1;
                shop();
                break;
            }
        }

        else if (buy == "2" && castle >= 3)
        {
            if (castle >= 3 && lvl2 <= 1 && coins >= buy2[lvl2])
            {
                coins -= buy2[lvl2];
                lvl2++;
                up2++;
                shop();
                break;
            }
            if (castle >= 4 && lvl2 <= 3 && coins >= buy2[lvl2])
            {
                coins -= buy2[lvl2];
                lvl2++;
                up2++;
                shop();
                break;
            }
            if (castle >= 6 && lvl2 <= 5 && coins >= buy2[lvl2])
            {
                coins -= buy2[lvl2];
                lvl2++;
                up2++;
                shop();
                break;
            }
            if (castle >= 14 && lvl2 != 9 && coins >= buy2[lvl2])
            {
                coins -= buy2[lvl2];
                lvl2++;
                up2++;
                shop();
                break;
            }
            else
            {
                cout << "not enough coins/low caslte lvl/MAX lvl boost" << endl << endl;
                cout << "number: ";
            }
        }
        else if (buy == "3" && castle >= 7)
        {
            if (castle >= 7 && lvl3 <= 1 && coins >= buy3[lvl3])
            {
                coins -= buy3[lvl3];
                lvl3++;
                up3++;
                shop();
                break;
            }
            if (castle >= 9 && lvl3 <= 3 && coins >= buy3[lvl3])
            {
                coins -= buy3[lvl3];
                lvl3++;
                up3++;
                shop();
                break;
            }
            if (castle >= 12 && lvl3 <= 5 && coins >= buy3[lvl3])
            {
                coins -= buy3[lvl3];
                lvl3++;
                up3++;
                shop();
                break;
            }
            if (castle >= 19 && lvl3 != 9 && coins >= buy3[lvl3])
            {
                coins -= buy3[lvl3];
                lvl3++;
                up3++;
                shop();
                break;
            }
            else
            {
                cout << "not enough coins/low caslte lvl/MAX lvl boost" << endl << endl;
                cout << "number: ";
            }
        }
        else if (buy == "4" && castle >= 11)
        {
            if (castle >= 11 && lvl4 <= 1 && coins >= buy4[lvl4])
            {
                coins -= buy4[lvl4];
                lvl4++;
                up4++;
                shop();
                break;
            }
            if (castle >= 13 && lvl4 <= 3 && coins >= buy4[lvl4])
            {
                coins -= buy4[lvl4];
                lvl4++;
                up4++;
                shop();
                break;
            }
            if (castle >= 17 && lvl4 <= 5 && coins >= buy4[lvl4])
            {
                coins -= buy4[lvl4];
                lvl4++;
                up4++;
                shop();
                break;
            }
            if (castle >= 22 && lvl4 != 9 && coins >= buy4[lvl4])
            {
                coins -= buy4[lvl4];
                lvl4++;
                up4++;
                shop();
                break;
            }
            else
            {
                cout << "not enough coins/low caslte lvl/MAX lvl boost" << endl << endl;
                cout << "number: ";
            }
        }
        else
        {
            cout << "wrong number" << endl << endl;
            cout << "number: ";
        }

    }

}

void DoWork()
{
    for (int e = 10; e >= 1; e--)
        {
            system ("cls");
            cout << endl << "2x boost. " << e << " seconds left" << endl << endl;
            this_thread::sleep_for(1s);
            if (e == 1)
            {
                doublecoins = 0;
                cout << endl << endl << "x2 BOOST HAS ENDED" << endl << endl;
            }
        }
}

void typer()
{
    system ("cls");
    cout << "coins: " << coins << endl;
    cout << "every time when you type 1 you get " << tpr[lvl1] << " coins" << endl;
    cout << "type 0 to return to main menu" << endl << endl;

    if (doublecoins == 1)
        {
            cout << "You have the x2 boost on 10 sec" << endl;
            cout << "To activate it, ";
            system ("pause");
            thread th(DoWork);
            th.detach();
        }

    for (int i = 1; i<= 99999; i++)
    {

        string typed;
        cin >> typed;

        if (typed == "1")
        {
            if (doublecoins == 1)
            {
                cout << "+" << tpr[lvl1] * 2 << " coins" << endl;
                coins += tpr[lvl1] * 2;
            }
            else
            {
                cout << "+" << tpr[lvl1] << " coins" << endl;
                coins += tpr[lvl1];
            }
        }
        else if (typed == "0")
        {
            system ("cls");
            return;
        }
    }


}

void math()
{

    system ("cls");
    cout << "coins: " << coins << endl << endl;
    cout << "difficulty: " << endl;
    cout << "1. easy" << endl; //+, -, * 1digit
    cout << "2. medium" << endl; //+, - 2digits
    cout << "3. hard" << endl; //+, - 3digits
    cout << "4. very hard" << endl; //* 2digit
    cout << "555. rules" << endl;
    cout << "1000. exit" << endl << endl;

    cout << "number: ";

    string mathchoose;
    for (int i = 1; i<= 999999; i++)
    {
        cin >> mathchoose;
        if (mathchoose == "1" or mathchoose == "2" or mathchoose == "3" or mathchoose == "4") break;
        else if (mathchoose == "555")
        {
            cout << "rules: " << endl << endl;
            cout << "You have to answer to randomly generated problems" << endl;
            cout << "For every correct answer you get coins" << endl;
            cout << "Amount of coins depends on a difficulty of problems" << endl << endl;
            cout << "number: ";
        }
        else if (mathchoose == "1000")
        {
            system ("cls");
            return;
        }
        else
        {
            cout << "error" << endl << endl;
            cout << "number: ";
        }
    }

    if (mathchoose == "1")
    {
        system ("cls");
        cout << "type MENU to return to main menu" << endl << endl;
        for (int i = 1; i<= 999999; i++)
        {
            int a, b, c;
            a = rand() % 9 + 1;
            c = rand() % 3 + 1;
            b = rand() % 9 + 1;
            if (c == 1)
            {
                cout << a << ' ' << '+' << ' ' << b << ' ' << '=' << ' ' << '?' << endl;
                cout << "? = ";
                string ans;
                cin >> ans;
                int answer = 0;
                if (ans == "MENU")
                {
                    system ("cls");
                    return;
                }
                if (ans.size() == 2)
                {
                    answer = (ans[0] - 48) * 10 + ans[1] - 48;
                }
                else
                {
                    answer = ans[0] - 48;
                }
                if (answer == a + b)
                {
                    cout << endl << "+" << mth1[lvl2] << " coins" << endl << endl;
                    coins += mth1[lvl2];
                }
                else cout << endl << "wrong" << endl << endl;

            }
            else if (c == 2)
            {
                cout << a << ' ' << '-' << ' ' << b << ' ' << '=' << ' ' << '?' << endl;
                cout << "? = ";
                string ans;
                cin >> ans;
                int answer = 0;
                if (ans == "MENU")
                {
                    system ("cls");
                    return;
                }
                if (ans.size() == 2 && ans[0] == '-')
                {
                    answer = (ans[1] - 48) * -1;
                }
                else
                {
                    answer = ans[0] - 48;
                }
                if (answer == a - b)
                {
                    cout << endl << "+" << mth1[lvl2] << " coins" << endl << endl;
                    coins += mth1[lvl2];
                }
                else cout << endl << "wrong" << endl << endl;
            }
            else if (c == 3)
            {
                cout << a << ' ' << '*' << ' ' << b << ' ' << '=' << ' ' << '?' << endl;
                cout << "? = ";
                string ans;
                cin >> ans;
                int answer = 0;
                if (ans == "MENU")
                {
                    system ("cls");
                    return;
                }
                if (ans.size() == 2)
                {
                    answer = (ans[0] - 48) * 10 + ans[1] - 48;
                }
                else
                {
                    answer = ans[0] - 48;
                }
                if (answer == a * b)
                {
                    cout << endl << "+" << mth1[lvl2] << " coins" << endl << endl;
                    coins += mth1[lvl2];
                }
                else cout << endl << "wrong" << endl << endl;
            }

        }
    }
    else if (mathchoose == "2")
    {
        system ("cls");
        cout << "type MENU to return to main menu" << endl << endl;
        for (int i = 1; i<= 999999; i++)
        {
            int a, b, c;
            a = rand() % 90 + 10;
            c = rand() % 2 + 1;
            b = rand() % 90 + 10;

            if (c == 1)
            {
                cout << a << ' ' << '+' << ' ' << b << ' ' << '=' << ' ' << '?' << endl;
                cout << "? = ";
                string ans;
                cin >> ans;
                int answer = 0;
                if (ans == "MENU")
                {
                    system ("cls");
                    return;
                }
                if (ans.size() == 3)
                {
                    answer = (ans[0] - 48) * 100 + (ans[1] - 48) * 10 + ans[2] - 48;
                }
                else if (ans.size() == 2)
                {
                    answer = (ans[0] - 48) * 10 + ans[1] - 48;
                }
                if (answer == a + b)
                {
                    cout << endl << "+" << mth2[lvl2] << " coins" << endl << endl;
                    coins += mth2[lvl2];
                }
                else cout << endl << "wrong" << endl << endl;
            }
            else if (c == 2)
            {
                cout << a << ' ' << '-' << ' ' << b << ' ' << '=' << ' ' << '?' << endl;
                cout << "? = ";
                string ans;
                cin >> ans;
                int answer = 0;
                if (ans == "MENU")
                {
                    system ("cls");
                    return;
                }
                if (ans.size() == 2 && ans[0] == '-')
                {
                    answer = (ans[1] - 48) * -1;
                }
                else if (ans.size() == 3 && ans[0] == '-')
                {
                    answer = ((ans[1] - 48)* 10 + (ans[2] - 48)) * -1;
                }
                else if (ans.size() == 2)
                {
                    answer = (ans[0] - 48) * 10 + ans[1] - 48;
                }
                else if (ans.size() == 1)
                {
                    answer = ans[0] - 48;
                }
                if (answer == a - b)
                {
                    cout << endl << "+" << mth2[lvl2] << " coins" << endl << endl;
                    coins += mth2[lvl2];
                }
                else cout << endl << "wrong" << endl << endl;
            }
        }
    }
    else if (mathchoose == "3")
    {
        system ("cls");
        cout << "type MENU to return to main menu" << endl << endl;
        for (int i = 1; i<= 999999; i++)
        {
            int a, b, c;
            a = rand() % 900 + 100;
            c = rand() % 2 + 1;
            b = rand() % 900 + 100;

            if (c == 1)
            {
                cout << a << ' ' << '+' << ' ' << b << ' ' << '=' << ' ' << '?' << endl;
                cout << "? = ";
                string ans;
                cin >> ans;
                int answer = 0;
                if (ans == "MENU")
                {
                    system ("cls");
                    return;
                }
                if (ans.size() == 4)
                {
                    answer  = (ans[0] - 48) * 1000 + (ans[1] - 48) * 100 + (ans[2] - 48) * 10 + ans[3] - 48;
                }
                else if (ans.size() == 3)
                {
                    answer = (ans[0] - 48) * 100 + (ans[1] - 48) * 10 + ans[2] - 48;
                }
                if (answer == a + b)
                {
                    cout << endl << "+" << mth3[lvl2] << " coins" << endl << endl;
                    coins += mth3[lvl2];
                }
                else cout << endl << "wrong" << endl << endl;
            }
            else if (c == 2)
            {
                cout << a << ' ' << '-' << ' ' << b << ' ' << '=' << ' ' << '?' << endl;
                cout << "? = ";
                string ans;
                cin >> ans;
                int answer = 0;
                if (ans == "MENU")
                {
                    system ("cls");
                    return;
                }
                if (ans.size() == 4 && ans[0] == '-')
                {
                    answer = ((ans[1] - 48) * 100 + (ans[2] - 48) * 10 + ans[3] - 48) * -1;
                }
                else if (ans.size() == 4)
                {
                    answer  = (ans[0] - 48) * 1000 + (ans[1] - 48) * 100 + (ans[2] - 48) * 10 + ans[3] - 48;
                }
                else if (ans.size() == 3 && ans[0] == '-')
                {
                    answer  = ((ans[1] - 48) * 10 + (ans[2] - 48)) * -1;
                }
                else if (ans.size() == 3)
                {
                    answer = (ans[0] - 48) * 100 + (ans[1] - 48) * 10 + ans[2] - 48;
                }
                else if (ans.size() == 2 && ans[0] == '-')
                {
                    answer  = (ans[1] - 48) * -1;
                }
                else if (ans.size() == 2)
                {
                    (ans[0] - 48) * 10 + ans[1] - 48;
                }
                if (answer == a - b)
                {
                    cout << endl << "+" << mth3[lvl2] << " coins" << endl << endl;
                    coins += mth3[lvl2];
                }
                else cout << endl << "wrong" << endl << endl;
            }
        }


    }
    else if (mathchoose == "4")
    {
        system ("cls");
        cout << "type MENU to return to main menu" << endl << endl;
        for (int i = 1; i<= 999999; i++)
        {
            int a, b;
            a = rand() % 90 + 10;
            b = rand() % 90 + 10;

            cout << a << ' ' << '*' << ' ' << b << ' ' << '=' << ' ' << '?' << endl;
                cout << "? = ";
                string ans;
                cin >> ans;
                int answer = 0;
                if (ans == "MENU")
                {
                    system ("cls");
                    return;
                }
                else if (ans.size() == 4)
                {
                    answer  = (ans[0] - 48) * 1000 + (ans[1] - 48) * 100 + (ans[2] - 48) * 10 + ans[3] - 48;
                }
                else if (ans.size() == 3)
                {
                    answer = (ans[0] - 48) * 100 + (ans[1] - 48) * 10 + ans[2] - 48;
                }
                if (answer == a * b)
                {
                    cout << endl << "+" << mth4[lvl2] << " coins" << endl << endl;
                    coins += mth4[lvl2];
                }
                else cout << endl << "wrong" << endl << endl;
        }
    }

}

void intuition ()
{
    system ("cls");
    cout << "coins: " << coins << endl << endl;
    cout << "difficulty: " << endl;
    cout << "1. easy (3 options) cost: 250 coins" << endl; //+, -, * 1digit
    cout << "2. medium (5 options) cost: 400 coins" << endl; //+, - 2digits
    cout << "3. hard (7 options) cost: 800 coins" << endl; //+, - 3digits
    cout << "555. rules" << endl;
    cout << "1000. exit" << endl << endl;

    cout << "number: ";
    string intuchoose;
    for (int i = 1; i<= 999999; i++)
    {
        cin >> intuchoose;
        if ((coins >= 250 && intuchoose == "1") || (coins >= 400 && intuchoose == "2") || (coins >= 800 && intuchoose == "3")) break;
        else if (intuchoose == "555")
        {
            cout << "rules: " << endl << endl;
            cout << "You have to guess right option from randomly generated options" << endl;
            cout << "For every correct answer you get coins" << endl;
            cout << "Amount of coins depends on an amount of options" << endl << endl;
            cout << "number: ";
        }
        else if (intuchoose == "1000")
        {
            system ("cls");
            return;
        }
        else
        {
            cout << "wrong number or not enough coins" << endl << endl;
            cout << "number: ";
        }
    }

    if (intuchoose == "1")
    {
        tryagain31:
        system ("cls");
        for (int i = 1; i<= 999999; i++)
        {
            coins -= 250;
            cout << "-250 coins" << endl << endl;
            int a, guessed;
            a = rand() % 3 + 1;
            string guess;
            cout << "1. option A" << endl;
            cout << "2. option B" << endl;
            cout << "3. option C" << endl << endl;
            cout << "number: ";
            for (int j = 1; j <= 999999; j++)
            {
                cin >> guess;
                if (guess == "1" or guess == "2" or guess == "3") break;
                else
                {
                    cout << "error" << endl << endl;
                    cout << "number: ";
                }
            }
            guessed = guess[0] - 48;
            if (guessed == a)
            {
                cout << endl << "correct!" << endl;
                coins += intu1[lvl3];
                cout << "+" << intu1[lvl3] << " coins" << endl << endl;
            }
            else
            {
                cout << endl << "wrong!" << endl;
                cout << "correct answer: option ";
                if (a == 1) cout << 'A' << endl << endl;
                else if (a == 2) cout << 'B' << endl << endl;
                else cout << 'C' << endl << endl;
            }
                cout << "coins: " << coins << endl << endl;
                cout << "1. play again" << endl;
                cout << "2. menu" << endl << endl;
                cout << "number: ";
                string finish;
                for (int z = 1; z <= 999999; z++)
                {
                    cin >> finish;
                    if (finish == "2")
                    {
                        system ("cls");
                        return;
                    }
                    else if (coins >= 250 && finish == "1") goto tryagain31;
                    else
                    {
                        cout << "wrong number or not enough coins" << endl << endl;
                        cout << "number: ";
                    }
                }
        }
    }
    else if (intuchoose == "2")
    {
        tryagain32:
        system ("cls");
        for (int i = 1; i<= 999999; i++)
        {
            coins -= 400;
            cout << "-400 coins" << endl << endl;
            int a, guessed;
            a = rand() % 5 + 1;
            string guess;
            cout << "1. option A" << endl;
            cout << "2. option B" << endl;
            cout << "3. option C" << endl;
            cout << "4. option D" << endl;
            cout << "5. option E" << endl << endl;
            cout << "number: ";
            for (int j = 1; j <= 999999; j++)
            {
                cin >> guess;
                if (guess == "1" or guess == "2" or guess == "3" or guess == "4" or guess == "5") break;
                else
                {
                    cout << "error" << endl << endl;
                    cout << "number: ";
                }
            }
            guessed = guess[0] - 48;
            if (guessed == a)
            {
                cout << endl << "correct!" << endl;
                coins += intu2[lvl3];
                cout << "+" << intu2[lvl3] << " coins" << endl << endl;
            }
            else
            {
                cout << endl << "wrong!" << endl;
                cout << "correct answer: option ";
                if (a == 1) cout << 'A' << endl << endl;
                else if (a == 2) cout << 'B' << endl << endl;
                else if (a == 3) cout << 'C' << endl << endl;
                else if (a == 4) cout << 'D' << endl << endl;
                else cout << 'E' << endl << endl;
            }
                cout << "coins: " << coins << endl << endl;
                cout << "1. play again" << endl;
                cout << "2. menu" << endl << endl;
                cout << "number: ";
                string finish;
                for (int z = 1; z <= 999999; z++)
                {
                    cin >> finish;
                    if (finish == "2")
                    {
                        system ("cls");
                        return;
                    }
                    else if (coins >= 400 && finish == "1") goto tryagain32;
                    else
                    {
                        cout << "wrong number or not enough coins" << endl << endl;
                        cout << "number: ";
                    }
                }
        }
    }
    else if (intuchoose == "3")
    {
        tryagain33:
        system ("cls");
        for (int i = 1; i<= 999999; i++)
        {
            coins -= 800;
            cout << "-800 coins" << endl << endl;
            int a, guessed;
            a = rand() % 7 + 1;
            string guess;
            cout << "1. option A" << endl;
            cout << "2. option B" << endl;
            cout << "3. option C" << endl;
            cout << "4. option D" << endl;
            cout << "5. option E" << endl;
            cout << "6. option F" << endl;
            cout << "7. option G" << endl << endl;
            cout << "number: ";
            for (int j = 1; j <= 999999; j++)
            {
                cin >> guess;
                if (guess == "1" or guess == "2" or guess == "3" or guess == "4" or guess == "5" or guess == "6" or guess == "7") break;
                else
                {
                    cout << "error" << endl << endl;
                    cout << "number: ";
                }
            }
            guessed = guess[0] - 48;
            if (guessed == a)
            {
                cout << endl << "correct!" << endl;
                coins += intu3[lvl3];
                cout << "+" << intu3[lvl3] << " coins" << endl << endl;
            }
            else
            {
                cout << endl << "wrong!" << endl;
                cout << "correct answer: option ";
                if (a == 1) cout << 'A' << endl << endl;
                else if (a == 2) cout << 'B' << endl << endl;
                else if (a == 3) cout << 'C' << endl << endl;
                else if (a == 4) cout << 'D' << endl << endl;
                else if (a == 5) cout << 'E' << endl;
                else if (a == 6) cout << 'F' << endl;
                else cout << 'G' << endl << endl;
            }
                cout << "coins: " << coins << endl << endl;
                cout << "1. play again" << endl;
                cout << "2. menu" << endl << endl;
                cout << "number: ";
                string finish;
                for (int z = 1; z <= 999999; z++)
                {
                    cin >> finish;
                    if (finish == "2")
                    {
                        system ("cls");
                        return;
                    }
                    else if (coins >= 800 && finish == "1") goto tryagain33;
                    else
                    {
                        cout << "wrong number or not enough coins" << endl << endl;
                        cout << "number: ";
                    }
                }
        }
    }
}

void reaction()
{
    system ("cls");
    cout << "1. play" << endl;
    cout << "2. rules" << endl;
    cout << "3. menu" << endl << endl;

    cout << "number: ";
    string reacchoose;
    for (int i = 1; i<= 999999; i++)
    {
        cin >> reacchoose;
        if (reacchoose == "1") break;
        else if (reacchoose == "2")
        {
            cout << "rules: " << endl << endl;
            cout << "You have to rewrite randomly generated number that appears on the random place of screen" << endl;
            cout << "Random generated number disappears after few milliseconds" << endl;
            cout << "For every correct answer you get coins" << endl << endl;
            cout << "number: ";
        }
        else if (reacchoose == "3")
        {
            system ("cls");
            return;
        }
        else
        {
            cout << "error" << endl << endl;
            cout << "number: ";
        }
    }

    tryagain4:
        int a, b, c, d = 0, multiplier = 1;
        system ("cls");
        cout << "after a few seconds you will see the number..." << endl;
        Sleep(1500);
        system("cls");
        a = rand() % 50 + 1;
        b = rand() % 100 + 1;
        c = rand() % 999 + 1;
        Sleep (1500);
        for (int y = 1; y <= a; y++)
        {
            cout << endl;
        }
        for (int e = 1; e <= b; e++)
        {
            cout << ' ';
        }
        cout << c;
        Sleep (250);
        system ("cls");
        string d1;
        cout << "number: ";
        cin >> d1;
        for (int r = d1.size() - 1; r >= 0; r--)
        {
            d += (d1[r] - 48) * multiplier;
            multiplier *= 10;
        }
        if (d == c)
        {
            cout << endl << "correct!" << endl;
            cout << "+" << reac[lvl4] << " coins" << endl << endl;
            coins += reac[lvl4];
        }
        else
        {
            cout << endl << "wrong!" << endl;
            cout << "correct answer: " << c << endl << endl;
        }
        cout << "1. play again" << endl;
        cout << "2. menu" << endl << endl;
        cout << "number: ";
        string reacfinish;
        for (int k = 1; k <= 999999; k++)
        {
            cin >> reacfinish;
            if (reacfinish == "1") goto tryagain4;
            else if (reacfinish == "2")
            {
                system ("cls");
                return;
            }
            else cout << "wrong number" << endl << "number: ";
        }
}

void crash()
{
    system ("cls");
    cout << "1. play" << endl;
    cout << "2. rules" << endl;
    cout << "3. menu" << endl << endl;

    cout << "number: ";
    string crashchoose;
    for (int i = 1; i<= 999999; i++)
    {
        cin >> crashchoose;
        if (crashchoose == "1") break;
        else if (crashchoose == "2")
        {
            cout << "rules: " << endl << endl;
            cout << "The stopwatch will run until it resets in any moment" << endl;
            cout << "You have to type the amount of time in milliseconds when you need to stop" << endl;
            cout << "If the written amount of time will be smaller than actual, you get multiplied amount of bet on amount of time that has passed until your" << endl << endl;
            cout << "number: ";
        }
        else if (crashchoose == "3")
        {
            system ("cls");
            return;
        }
        else
        {
            cout << "error" << endl << endl;
            cout << "number: ";
        }
    }
    system ("cls");
    string bet;
    string bet1;
    long double betted = 0;
    cout << "coins: " << coins << endl << endl;
    betagain:
        cout << "Your bet: ";
        cin >> bet;

        for (int j = 0; j < bet.size(); j++)
        {
            if (bet[j] != '0' && bet[j] != '1' && bet[j] != '2' && bet[j] != '3' && bet[j] != '4' && bet[j] != '5' && bet[j] != '6' && bet[j] != '7' && bet[j] != '8' && bet[j] != '9' or bet[0] == '0' or bet.size() >= 7)
            {
                cout << "error" << endl;
                goto betagain;
                break;
            }
        }

    for (int i = 0; i < bet.length(); i++){
        betted = betted*10 + bet[i] - 48;
    }
    if (betted > coins)
    {
        betted = 0;
        cout << "not enough coins" << endl;
        goto betagain;
    }

    coins -= betted;
    cout << endl << "-" << betted << " coins" << endl;
    timeagain:
    cout << endl << "Time stop (in milliseconds): ";
        cin >> bet1;

        for (int j = 0; j < bet1.size(); j++)
        {
            if (int(bet1[j]) < 48 || int(bet1[j]) > 57 or bet1[0] == '0' or bet1.size() >= 10)
            {
                cout << "error" << endl;
                goto timeagain;
                break;
            }
        }

    long double timestop = 0;
    for (int i = 0; i < bet1.length(); i++)
    {
        timestop = timestop*10 + bet1[i] - 48;
    }

    double time1, time2, time;
    time1 = rand() % 10 + 1;
    time2 = rand() % 999 + 1;
    time = time1 + time2 / 1000;

    for (long double c = 0; c <= time; c += 0.01)
    {
        system ("cls");
        cout << "crash: " << c << " seconds" << endl;
        cout << "stop time (in ms): " << timestop << endl;
    }

    if (time >= timestop / 1000)
        {
            coins += betted + betted * (timestop / 10000);
            cout << "+" << betted + betted * (timestop / 10000) << " coins" << endl << endl;
        }
    else
    {
        cout << endl << "lose" << endl << endl;
        cout << "1. play again" << endl;
        cout << "2. menu" << endl << endl;
        cout << "number: ";
        string crashfinish;
        for (int k = 1; k <= 999999; k++)
        {
            cin >> crashfinish;
            if (crashfinish == "1") goto betagain;
            else if (crashfinish == "2")
            {
                system ("cls");
                return;
            }
            else cout << "wrong number" << endl << "number: ";
        }
    }
}

int main()
{
srand(time(NULL));

cout << endl << "ver: 0.1               wanna_castle_rn?               creators: fakzisgeim09, zte" << endl << endl << endl << endl;

cout << "Welcome, new one!" << endl;
cout << "You are seeing this winidow the first and the last time" << endl;
cout << "Please, set up your device correctly for avoiding any problems:" << endl << endl;

cout << "1) in layout properties, set up your console shape to the max size that you can (the best size - h: 66, w: 237)" << endl;
cout << "2) open the console in full sized window without frames (alt + enter on Windows)" << endl;
cout << "3) possess at least 4 core CPU" << endl << endl;
cout << "when you will be ready, ";

system ("pause");

system ("cls");
for (int i = 1; i<= 999999; i++)
{
    if (castle >= 25)
    {
        system ("cls");
        char a[6][7];
        for (int h = 0; h < 6; h++)
        {
            for (int o = 0; o < 7; o++)
            {
                a[h][o] = '*';
            }
        }
        a[0][0] = ' ';
        a[0][3] = ' ';
        a[0][6] = ' ';
        a[3][0] = ' ';
        a[3][6] = ' ';
        a[4][5] = ' ';
        a[4][6] = ' ';
        a[4][0] = ' ';
        a[4][1] = ' ';
        a[5][0] = ' ';
        a[5][1] = ' ';
        a[5][2] = ' ';
        a[5][4] = ' ';
        a[5][5] = ' ';
        a[5][6] = ' ';

        for (int h = 0; h < 6; h++)
        {
            for (int o = 0; o < 7; o++)
            {
                cout << setw(2) << a[h][o];
            }
            cout << endl;
        }

        cout << "congratulations!" << endl;
        cout << "you have completed the game!" << endl;
        cout << "thanks for playing" << endl << endl << endl << endl << endl;
        system ("pause");
        Sleep (3000);
        return 0;
    }
    cout << "coins: " << coins << endl << endl;
    cout << "1. typer" << endl;
    if (castle >= 3)
    {
       cout << "2. math" << endl;
    }
    if (castle >= 7)
    {
        cout << "3. intuition" << endl;
    }
    if (castle >= 11)
    {
        cout << "4. reaction" << endl;
    }
    if (castle >= 16)
    {
        cout << "5. crash" << endl;
    }
    cout << "0. shop" << endl << endl;
    string b;
    for (int j = 1; j <= 9999; j++)
    {
        cin >> b;
        if (b == "1")
        {
            typer();
            break;

        }
        else if (b == "2" && castle >= 3)
        {
            math();
            break;
        }
        else if (b == "3" && castle >= 7)
        {
            intuition ();
            break;
        }
        else if (b == "4" && castle >= 11)
        {
            reaction ();
            break;
        }
        else if (b == "5" && castle >= 16)
        {
            crash ();
            break;
        }
        else if (b == "0")
        {
            shop();
            break;
        }
        else cout << "?" << endl;
    }
}

cout << "out";
return 0;
}


