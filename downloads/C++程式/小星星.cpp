#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <windows.h>
using namespace std;

// _�b�e��ܧC��, �b�Z��ܰ���
// o��ܤ�
const int _oC = 277, _oD = 311, _oF = 370, _oG = 415, _oA = 466;
const int _C = 262, _D = 294, _E = 330, _F = 349, _G = 392, _A = 440, _B = 494;
const int oC = 554, oD = 622, oF = 740, oG = 831, oA = 932;
const int C = 523, D = 578, E = 659, F = 698, G = 784, A = 880, B = 988;
const int C_ = 1047, D_ = 1175, E_ = 1319, F_ = 1397, G_ = 1568, A_ = 1760, B_ = 1976;
const int oC_ = 1109, oD_ = 1245, oF_ = 1480, oG_ = 1661, oA_ = 1865;

const int T = 400; //�@�窺?��
const int Stop = 800; //�@����Ū�?��

int main()
{
    Beep( C, T );
    Beep( C, T );
    Beep( G, T );
    Beep( G, T );
    Beep( A, T );
    Beep( A, T );
    Beep( G, T * 2 );

    Beep( F, T );
    Beep( F, T );
    Beep( E, T );
    Beep( E, T );
    Beep( D, T );
    Beep( D, T );
    Beep( C, T * 2 );
    
    Beep( G, T );
    Beep( G, T );
    Beep( F, T );
    Beep( F, T );
    Beep( E, T );
    Beep( E, T );
    Beep( D, T * 2 );
    
    Beep( G, T );
    Beep( G, T );
    Beep( F, T );
    Beep( F, T );
    Beep( E, T );
    Beep( E, T );
    Beep( D, T * 2 );
    
    Beep( C, T );
    Beep( C, T );
    Beep( G, T );
    Beep( G, T );
    Beep( A, T );
    Beep( A, T );
    Beep( G, T * 2 );

    Beep( F, T );
    Beep( F, T );
    Beep( E, T );
    Beep( E, T );
    Beep( D, T );
    Beep( D, T );
    Beep( C, T * 4 );
    return 0;
}
