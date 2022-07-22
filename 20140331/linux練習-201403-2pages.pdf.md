1. 資料的分解

    目的 : 設計一組合語言副程式，宣告如下

        unsigned char Get4bits(int value);

    將 `value` 內的最低效 4 位元資料取出，回傳給主程式。

    將回傳值最高效 4 個位元清為 `0` 。

    範例:

        void main(void)
        {
            int Value;
            unsigned char _Low;
            Value = 0x49;
            _Low=Get4Bits(Value);
            printf("Value=%02X, _Low=%02X\n", Value, _Low);
            return 0;
        }

---

2. 找出 2 數的最大值(find max)

    目的 : 設計一組合語言副程式，宣告如下

        short _Max(short x, short y);

    將 `x` 與 `y` 的最大值，回傳給主程式。

    範例:

        int main(void)
        {
            short x=0x1234, y=0x8001, max;
            max=_Max(x, y);
            printf("max of x, y = %d\n", max);
            return 0;
        }

---

3. 找出三數中的最小值(find min)

    目的 : 設計一組合語言副程式，宣告如下

        int _min(int x, int y, int z);

    將 `x`，`y` 與 `z` 的最小值，回傳給主程式。

    範例:

        int main(void)
        {
            int n1, n2, n3, min;
            n1 = -2;
            n2 = 0x1023; n3 = 100;
            min = _min(n1, n2, n3);
            printf("min of x, y and z is %d\n", min);
            return 0;
        }

---

4. 資料總和(sum of data)

    目的 : 設計一組合語言副程式，宣告如下

        int Sum(int *x, int n);

    計算一串數目之總和，此串數目的個數在 `n` 中，數目本身由 `x` 開始。把此串數目之總和回傳給主程式。

    範例:

        int main(void)
        {
            int n=3; // 資料的個數
            int sum; // 儲存總和
            int x[]={2040,-1222,242};
            // 資料由此開始
            sum = Sum(x, n);
            printf("Sum of x = %d\n", sum);
            return 0;
        }

---

5. 尋找最大值(find max number of an array)

    目的 : 設計一組合語言副程式，宣告如下

        int MAX(short *x, int n);

    在一串數目中找出最大的元素。此串數目的元素個數在 `n` 中，資料本身由 `x` 開始，把最大的元素回傳給主程式。

    範例:

        main(void)
        {
            int n = 4; int _Max;
            short x[]={0xA484, 0x71AC, 0xE57A, 0x32F1};
            _Max = MAX(x, n);
            printf("Max of x is %04X\n", _Max);
        }

---

6. 正數的個數(count positive number)

    目的 : 設計一組合語言副程式，宣告如下

        int Positive(int *x, int n);

    在一串數目中計算「正數」的個數。此串數目的個數存於 `n` 中，且數目本身由 `x` 開始。把正數的個數回傳給主程式。

    範例:

        main(void)
        {
            int n = 6,
            int Pos;
            int Start[]={100, -101, 0x2120, 0, 0xE605, 4};
            Pos = Positive(Start, n);
            printf("Pos = %d\n", Pos);
        }

---

7. 零、正數與負數的個數

    目的 : 設計一組合語言副程式，宣告如下

        int ZeroCount(int *x, int n, int *pos, int *neg);

    計算一串數目中，零、正數與負數的個數。此串數目的個數存於 `n` 中，且數目本身由 `x` 開始。把正數與負數的個數分別存於 `pos` 與 `neg` 為「指標」的記憶體中。

    同時把『零』的個數回傳給主程式。

    範例:

        int main(void)
        {
            int n = 7;
            int Pos;
            int Zer;
            int Neg;
            int Start[]={7602, 848, -2120, 0, -605, 4, 0};
            Zero = ZeroCount(Start, n, &Pos, &Neg);
            printf("Zero=%d, Pos.=%d, Negative=%d\n", Zer, Pos, Neg);
            return 0;
        }

---

8. 字串長度

    目的：設計一組合語言副程式，宣告如下

        int len(char *buffer);

    計算一串 ASCII 字串的長度。字串所存放的開始位址為 `buffer`，字串的結束字元為`'\0'`。將此字串的長度(字元數，不含結束字元)求出，回傳給主程式。

    範例:

        int main(void)
        {
            char Start[]="Hello, this is my first program!";
            int Len;
            Len = len(Start);
            printf("string=%s\n", Start);
            printf("length=%d\n", Len);
            return 0;
        }

---

9. 記憶體 copy

    目的 : 設計一組合語言副程式，宣告如下

        void copy(char *dest, char *src, unsigned int n);

    從記憶體 `src` 開始 copy `n` 個 bytes 到記憶體 `dest` 去。

    範例:

        int main(void)
        {
            char *src="Hello, this is my first program!";
            char dest[200];
            unsigned int n;
            n = strlen(src)+1;
            copy(dest, src, n);
            printf("src=%d\n", src);
            printf("dst=%d\n", dest);
            return 0;
        }

---

10. 1+2+...+n

    目的 : 設計一組合語言副程式，宣告如下

        int sum(int n);

    計算 1+2+...+n (n >= 2)把結果回傳給主程式。

    必須使用迴圈編寫。(僅可以使用 `for`, `do`, `while` 迴圈)

    範例:

        int main(void)
        {
            int n=100, total;
            total = sum(n);
            printf("1+2+...+%d=%d\n", n, total);
            return 0;
        }

---

注意：

1. 本練習作業主要訓練同學是否會使用 cross-compiler.

2. 請於 3 月 31 日以前完成，利用 C 語言(最好不要用 C++)編寫，將執行檔上傳到 `127.0.0.1` 你有帳號的平台測試。

佚名 2014/03/17
