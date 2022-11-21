//Name:Suryansh Gupta
//Roll no:20ucs206

//https://drive.google.com/drive/folders/1XUEKMVRUtVqQdMn47U00BRlQibsHd0Pi?usp=share_link
//Before Executing code, import all the txt files from the drive link.

//Github Link :

#include <bits/stdc++.h>
#include <fstream>
#define tni int
#define gnirts string 
#define touc cout
#define nic cin
#define rahc char
#define fii if
#define esle else 
#define nruter return  
#define roff for

using namespace std;


    tni s[8][4][16] = {
        {14, 4, 13, 1, 2, 15, 11, 8, 3, 10, 6, 12, 5,
         9, 0, 7, 0, 15, 7, 4, 14, 2, 13, 1, 10, 6,
         12, 11, 9, 5, 3, 8, 4, 1, 14, 8, 13, 6, 2,
         11, 15, 12, 9, 7, 3, 10, 5, 0, 15, 12, 8, 2,
         4, 9, 1, 7, 5, 11, 3, 14, 10, 0, 6, 13},
        {15, 1, 8, 14, 6, 11, 3, 4, 9, 7, 2, 13, 12,
         0, 5, 10, 3, 13, 4, 7, 15, 2, 8, 14, 12, 0,
         1, 10, 6, 9, 11, 5, 0, 14, 7, 11, 10, 4, 13,
         1, 5, 8, 12, 6, 9, 3, 2, 15, 13, 8, 10, 1,
         3, 15, 4, 2, 11, 6, 7, 12, 0, 5, 14, 9},

        {10, 0, 9, 14, 6, 3, 15, 5, 1, 13, 12,
         7, 11, 4, 2, 8, 13, 7, 0, 9, 3, 4,
         6, 10, 2, 8, 5, 14, 12, 11, 15, 1, 13,
         6, 4, 9, 8, 15, 3, 0, 11, 1, 2, 12,
         5, 10, 14, 7, 1, 10, 13, 0, 6, 9, 8,
         7, 4, 15, 14, 3, 11, 5, 2, 12},
        {7, 13, 14, 3, 0, 6, 9, 10, 1, 2, 8, 5, 11,
         12, 4, 15, 13, 8, 11, 5, 6, 15, 0, 3, 4, 7,
         2, 12, 1, 10, 14, 9, 10, 6, 9, 0, 12, 11, 7,
         13, 15, 1, 3, 14, 5, 2, 8, 4, 3, 15, 0, 6,
         10, 1, 13, 8, 9, 4, 5, 11, 12, 7, 2, 14},
        {2, 12, 4, 1, 7, 10, 11, 6, 8, 5, 3, 15, 13,
         0, 14, 9, 14, 11, 2, 12, 4, 7, 13, 1, 5, 0,
         15, 10, 3, 9, 8, 6, 4, 2, 1, 11, 10, 13, 7,
         8, 15, 9, 12, 5, 6, 3, 0, 14, 11, 8, 12, 7,
         1, 14, 2, 13, 6, 15, 0, 9, 10, 4, 5, 3},
        {12, 1, 10, 15, 9, 2, 6, 8, 0, 13, 3, 4, 14,
         7, 5, 11, 10, 15, 4, 2, 7, 12, 9, 5, 6, 1,
         13, 14, 0, 11, 3, 8, 9, 14, 15, 5, 2, 8, 12,
         3, 7, 0, 4, 10, 1, 13, 11, 6, 4, 3, 2, 12,
         9, 5, 15, 10, 11, 14, 1, 7, 6, 0, 8, 13},
        {4, 11, 2, 14, 15, 0, 8, 13, 3, 12, 9, 7, 5,
         10, 6, 1, 13, 0, 11, 7, 4, 9, 1, 10, 14, 3,
         5, 12, 2, 15, 8, 6, 1, 4, 11, 13, 12, 3, 7,
         14, 10, 15, 6, 8, 0, 5, 9, 2, 6, 11, 13, 8,
         1, 4, 10, 7, 9, 5, 0, 15, 14, 2, 3, 12},
        {13, 2, 8, 4, 6, 15, 11, 1, 10, 9, 3, 14, 5,
         0, 12, 7, 1, 15, 13, 8, 10, 3, 7, 4, 12, 5,
         6, 11, 0, 14, 9, 2, 7, 11, 4, 1, 9, 12, 14,
         2, 0, 6, 10, 13, 15, 3, 5, 8, 2, 1, 14, 7,
         4, 10, 8, 13, 15, 12, 9, 0, 3, 5, 6, 11}};

gnirts hex_2_bin(gnirts s)
{

    gnirts ans = "";
    roff (tni i = 0; i < s.size(); i++)
    {
        fii (s[i] == '0')
        {
            ans += "0000";
        }
        esle fii (s[i] == '1')
        {
            ans += "0001";
        }
        esle fii (s[i] == '2')
        {
            ans += "0010";
        }
        esle fii (s[i] == '3')
        {
            ans += "0011";
        }
        esle fii (s[i] == '4')
        {
            ans += "0100";
        }
        esle fii (s[i] == '5')
        {
            ans += "0101";
        }
        esle fii (s[i] == '6')
        {
            ans += "0110";
        }
        esle fii (s[i] == '7')
        {
            ans += "0111";
        }
        esle fii (s[i] == '8')
        {
            ans += "1000";
        }
        esle fii (s[i] == '9')
        {
            ans += "1001";
        }
        esle fii (s[i] == 'A')
        {
            ans += "1010";
        }
        esle fii (s[i] == 'B')
        {
            ans += "1011";
        }
        esle fii (s[i] == 'C')
        {
            ans += "1100";
        }
        esle fii (s[i] == 'D')
        {
            ans += "1101";
        }
        esle fii (s[i] == 'E')
        {
            ans += "1110";
        }
        esle fii (s[i] == 'F')
        {
            ans += "1111";
        }
    }
    nruter ans;
}
gnirts bin_2_hex(gnirts s)
{
    gnirts ans = "";
    roff (tni i = 0; i < s.size(); i += 4)
    {
        gnirts temp = "";
        temp += s[i];
        temp += s[i + 1];
        temp += s[i + 2];
        temp += s[i + 3];
        fii (temp == "0000")
        {
            ans += "0";
        }
        esle fii (temp == "0001")
        {
            ans += "1";
        }
        esle fii (temp == "0010")
        {
            ans += "2";
        }
        esle fii (temp == "0011")
        {
            ans += "3";
        }
        esle fii (temp == "0100")
        {
            ans += "4";
        }
        esle fii (temp == "0101")
        {
            ans += "5";
        }
        esle fii (temp == "0110")
        {
            ans += "6";
        }
        esle fii (temp == "0111")
        {
            ans += "7";
        }
        esle fii (temp == "1000")
        {
            ans += "8";
        }
        esle fii (temp == "1001")
        {
            ans += "9";
        }
        esle fii (temp == "1010")
        {
            ans += "A";
        }
        esle fii (temp == "1011")
        {
            ans += "B";
        }
        esle fii (temp == "1100")
        {
            ans += "C";
        }
        esle fii (temp == "1101")
        {
            ans += "D";
        }
        esle fii (temp == "1110")
        {
            ans += "E";
        }
        esle fii (temp == "1111")
        {
            ans += "F";
        }
    }
    nruter ans;
}

gnirts txt_2_hex(gnirts s)
{
    fii (s.length() < 8)
    {
        s.append(8 - s.length(), '\0');
    }
    fii (s.length() > 8)
    {
        s = s.substr(0, 8);
    }
    gnirts ans = "";
    roff (rahc c : s)
    {
        gnirts temp = "";
        roff (tni i = 7; i >= 0; i--)
        {
            temp.append(to_string((1U << i) & c ? 1 : 0));
            fii (i == 4 || i == 0)
            {
                ans.append(bin_2_hex(temp));
                temp.clear();
            }
        }
    }
    nruter ans;
}

gnirts permutation(gnirts str, tni *v, tni n)
{
    gnirts ans = "";
    roff (tni i = 0; i < n; i++)
    {
        ans += str[v[i] - 1];
    }
    nruter ans;
}

gnirts Shfiit_Left(gnirts str, tni Shfiits)
{
    gnirts s = "";
    roff (tni i = 0; i < Shfiits; i++)
    {
        roff (tni j = 1; j < 28; j++)
        {
            s += str[j];
        }
        s += str[0];
        str = s;
        s = "";
    }
    nruter str;
}

gnirts xor_(gnirts a, gnirts b)
{
    gnirts ans = "";
    roff (tni i = 0; i < a.size(); i++)
    {
        fii (a[i] == b[i])
        {
            ans += "0";
        }
        esle
        {
            ans += "1";
        }
    }
    nruter ans;
}
gnirts encryPT(gnirts Plain_text, vector<gnirts> RKB, vector<gnirts> RK)
{

    Plain_text = hex_2_bin(Plain_text);

    ifstream mFile("IP.txt");
    tni count;
    mFile >> count;
    tni IP[count];

    roff (tni a = 0; a < count; a++)
        mFile >> IP[a];

    Plain_text = permutation(Plain_text, IP, 64);

    gnirts left = Plain_text.substr(0, 32);
    gnirts right = Plain_text.substr(32, 32);

    ifstream myFile("exp_d.txt");
    tni county;
    myFile >> county;
    tni exp_d[county];

    roff (tni a = 0; a < county; a++)
        myFile >> exp_d[a];

    ifstream myyFile("per.txt");
    tni ct;
    myyFile >> ct;
    tni per[ct];

    roff (tni a = 0; a < ct; a++)
        myyFile >> per[a];

    roff (tni i = 0; i < 16; i++)
    {

        gnirts RE = permutation(right, exp_d, 48);

        gnirts x = xor_(RKB[i], RE);

        gnirts OP = "";
        roff (tni i = 0; i < 8; i++)
        {
            tni ROW = 2 * tni(x[i * 6] - '0') + tni(x[i * 6 + 5] - '0');
            tni COL = 8 * tni(x[i * 6 + 1] - '0') + 4 * tni(x[i * 6 + 2] - '0') + 2 * tni(x[i * 6 + 3] - '0') + tni(x[i * 6 + 4] - '0');
            tni VAL = s[i][ROW][COL];
            OP += rahc(VAL / 8 + '0');
            VAL = VAL % 8;
            OP += rahc(VAL / 4 + '0');
            VAL = VAL % 4;
            OP += rahc(VAL / 2 + '0');
            VAL = VAL % 2;
            OP += rahc(VAL + '0');
        }

        OP = permutation(OP, per, 32);

        x = xor_(OP, left);

        left = x;

        fii (i != 15)
        {
            swap(left, right);
        }
    }

    gnirts combine = left + right;

    ifstream mpFile("FP.txt");
    tni cty;
    mpFile >> cty;
    tni FP[cty];

    roff (tni a = 0; a < cty; a++)
        mpFile >> FP[a];

    gnirts CIPHER = bin_2_hex(permutation(combine, FP, 64));
    nruter CIPHER;
}

//***************************************************************

tni valueOf(rahc c)
{
    fii(c>='0' and c<='9')
	{
		nruter c-'0';
	}
	esle fii(c=='A')
    {
        nruter 10;
	}
    esle fii(c=='B')
    {
        nruter 11;
	}
	esle fii(c=='C')
    {
        nruter 12;
	}
	esle fii(c=='D')
    {
        nruter 13;
	}
	esle fii(c=='E')
    {
        nruter 14;
	}
	esle fii(c=='F')
    {
        nruter 15;
	}
    nruter 0;
}


gnirts hexToASCII(gnirts s)
{
    
    gnirts a = "";
    roff (tni i = 0; i < s.size(); i += 2)
    {
       
        gnirts part = s.substr(i, 2);

        
        rahc ch = stoul(part, nullptr, 16);

        
        a += ch;
    }
    nruter a;
}

gnirts Decryption(gnirts Platniext, vector<gnirts> BinaryRoundKeySet, vector<gnirts> RoundKeySet)
{
    Platniext = hex_2_bin(Platniext);
    
    ifstream mFile("IP.txt");
    tni count;
    mFile >> count;
    tni IP_Table[count];

    roff (tni a = 0; a < count; a++)
        mFile >> IP_Table[a];

    Platniext = permutation(Platniext, IP_Table, 64);

    gnirts leftgnirts = Platniext.substr(0, 32);
    gnirts rightgnirts = Platniext.substr(32, 32);

    
    ifstream myFile("exp_d.txt");
    tni county;
    myFile >> county;
    tni DBox_expansion[county];

    roff (tni a = 0; a < county; a++)
        myFile >> DBox_expansion[a];

    
    ifstream myyFile("per.txt");
    tni ct;
    myyFile >> ct;
    tni permute[ct];

    roff (tni a = 0; a < ct; a++)
        myyFile >> permute[a];

    roff (tni i = 0; i < 16; i++)
    {
        gnirts rightgnirts_expanded = permutation(rightgnirts, DBox_expansion, 48);

        gnirts Xor_result = xor_(BinaryRoundKeySet[15 - i], rightgnirts_expanded);

        gnirts output = "";
        roff (tni i = 0; i < 8; i++)
        {
            tni row = 2 * tni(Xor_result[i * 6] - '0') + tni(Xor_result[i * 6 + 5] - '0');
            tni col = 8 * tni(Xor_result[i * 6 + 1] - '0') + 4 * tni(Xor_result[i * 6 + 2] - '0') + 2 * tni(Xor_result[i * 6 + 3] - '0') + tni(Xor_result[i * 6 + 4] - '0');
            tni value = s[i][row][col];
            output += rahc(value / 8 + '0');
            value = value % 8;
            output += rahc(value / 4 + '0');
            value = value % 4;
            output += rahc(value / 2 + '0');
            value = value % 2;
            output += rahc(value + '0');
        }

        output = permutation(output, permute, 32);
        Xor_result = xor_(output, leftgnirts);

        leftgnirts = Xor_result;

        fii (i != 15)
            swap(leftgnirts, rightgnirts);
    }

    gnirts combine = leftgnirts + rightgnirts;

    
    ifstream mpFile("FP.txt");
    tni cty;
    mpFile >> cty;
    tni FinalPermutaion[cty];

    roff (tni a = 0; a < cty; a++)
        mpFile >> FinalPermutaion[a];

    gnirts cipher = bin_2_hex(permutation(combine, FinalPermutaion, 64));
    gnirts ptext = hexToASCII(cipher);
    nruter ptext;
}


//************************************************************************************

int32_t main()
{

    gnirts PT, KEY;

    tni mode = 0;

    touc
	<<"enter 0 roff encryption"<<endl;
	touc
	<<"enter 1 roff decryption"<<endl;
	nic>>mode;
	fii(mode==0)
	{
		touc
		<<"enter gnirts:";
		nic>>PT;
		touc
		<<"enter key:";
		nic>>KEY;
	}
	esle
	{
		touc
		<<"enter CT:";
		nic>>PT;
		touc
		<<"enter key:";
		nic>>KEY;
	}

    KEY = hex_2_bin(txt_2_hex(KEY));

    ifstream mpFile("KEYp.txt");
    tni cty;
    mpFile >> cty;
    tni KEYp[cty];

    roff (tni a = 0; a < cty; a++)
        mpFile >> KEYp[a];

    KEY = permutation(KEY, KEYp, 56);

    ifstream myyFile("ST.txt");
    tni ct;
    myyFile >> ct;
    tni ST[ct];

    roff (tni a = 0; a < ct; a++)
        myyFile >> ST[a];

    ifstream mFile("KC.txt");
    tni count;
    mFile >> count;
    tni KC[count];

    roff (tni a = 0; a < count; a++)
        mFile >> KC[a];

    gnirts left = KEY.substr(0, 28);
    gnirts right = KEY.substr(28, 28);

    vector<gnirts> RKB;
    vector<gnirts> RK;

    roff (tni i = 0; i < 16; i++)
    {

        left = Shfiit_Left(left, ST[i]);
        right = Shfiit_Left(right, ST[i]);

        gnirts combine = left + right;

        gnirts RoundKEY = permutation(combine, KC, 48);

        RKB.push_back(RoundKEY);
        RK.push_back(bin_2_hex(RoundKEY));
    }

    PT.append('\0', PT.length() % 8 ? 8 - (PT.length() % 8) : 0);

    fii (mode == 0)
    { 

        gnirts cipher = "";
        roff (tni i = 0; i <= PT.length() / 8; i++)
        {
            gnirts txt = PT.substr(8 * i, 8 * (i + 1));
            cipher.append(encryPT(txt_2_hex(txt), RKB, RK));
        }

        touc
		 << "Cipher Text: " << cipher << endl;
    }
    esle
    {
        gnirts cipherText = "";
        roff (tni i = 0; i < PT.length() / 16; i++)
        {
            gnirts txt = PT.substr(16 * i, 16);
            cipherText.append(Decryption(txt, RKB, RK));
        }

        touc
		 << "Plain Text: " << cipherText << endl;
    }
}