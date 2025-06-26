class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        int I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'I' && i + 1 < s.length() && s[i + 1] == 'V') {
                sum += (V - I);
                i++;
            }
            else if (s[i] == 'I' && i + 1 < s.length() && s[i + 1] == 'X') {
                sum += (X - I);
                i++;
            }
            else if (s[i] == 'X' && i + 1 < s.length() && s[i + 1] == 'L') {
                sum += (L - X);
                i++;
            }
            else if (s[i] == 'X' && i + 1 < s.length() && s[i + 1] == 'C') {
                sum += (C - X);
                i++;
            }
            else if (s[i] == 'C' && i + 1 < s.length() && s[i + 1] == 'D') {
                sum += (D - C);
                i++;
            }
            else if (s[i] == 'C' && i + 1 < s.length() && s[i + 1] == 'M') {
                sum += (M - C);
                i++;
            }
            else if (s[i] == 'I') sum += I;
            else if (s[i] == 'V') sum += V;
            else if (s[i] == 'X') sum += X;
            else if (s[i] == 'L') sum += L;
            else if (s[i] == 'C') sum += C;
            else if (s[i] == 'D') sum += D;
            else if (s[i] == 'M') sum += M;
        }

        return sum;
    }
};
