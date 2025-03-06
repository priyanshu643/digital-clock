
int abc = 33;
int bcd = 34;
int cde = 35;
int def = 36;
int efg = 37;
int fgh = 38;
int ghi = 39;
int hij = 40;
int ABC = 41;
int BCD = 42;
int CDE = 43;
int DEF = 44;
int EFG = 45;
int FGH = 46;
int GHI = 47;
int HIJ = 48;

int a = 1;
int b = 2;
int c = 3;
int d = 4;
int e = 5;
int f = 6;
int g = 7;
int h = 8;
int A = 9;
int B = 10;
int C = 11;
int D = 12;
int E = 13;
int F = 14;
int G = 15;
int H = 16;
int ab = 17;
int bc = 18;
int cd = 19;
int de = 20;
int ef = 21;
int fg = 22;
int gh = 23;
int hi = 24;
int AB = 25;
int BC = 26;
int CD = 27;
int DE = 28;
int EF = 29;
int FG = 30;
int GH = 31;
int HI = 32;
int x = 60000;
int y = 600000;
int z = 3600000;
int xyz = 36000000;
int X = 1000;
int Y = 10000;

void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(h, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(H, OUTPUT);
  pinMode(ab, OUTPUT);
  pinMode(bc, OUTPUT);
  pinMode(cd, OUTPUT);
  pinMode(de, OUTPUT);
  pinMode(ef, OUTPUT);
  pinMode(fg, OUTPUT);
  pinMode(gh, OUTPUT);
  pinMode(hi, OUTPUT);
  pinMode(AB, OUTPUT);
  pinMode(BC, OUTPUT);
  pinMode(CD, OUTPUT);
  pinMode(DE, OUTPUT);
  pinMode(EF, OUTPUT);
  pinMode(FG, OUTPUT);
  pinMode(GH, OUTPUT);
  pinMode(HI, OUTPUT);
}

void loop() {
  minut0();
  delay(x);
  minut1();
  delay(x);
  minut2();
  delay(x);
  minut3();
  delay(x);
  minut4();
  delay(x);
  minut5();
  delay(x);
  minut6();
  delay(x);
  minut7();
  delay(x);
  minut8();
  delay(x);
  minut9();
  delay(x);
  tenminut0();
  delay(y);
  tenminut1();
  delay(y);
  tenminut2();
  delay(y);
  tenminut3();
  delay(y);
  tenminut4();
  delay(y);
  tenminut5();
  delay(y);
  tenminut6();
  delay(y);
  hour0();
  delay(z);
  hour0();
  delay(z);
  hour2();
  delay(z);
  hour3();
  delay(z);
  hour4();
  delay(z);
  hour5();
  delay(z);
  hour6();
  delay(z);
  hour7();
  delay(z);
  hour8();
  delay(z);
  hour9();
  delay(z);
  tenhour0();
  delay(xyz);
  tenhour1();
  delay(xyz);
  tenhour2();
  delay(xyz);
  tenhour3();
  delay(xyz);
  tenhour4();
  delay(xyz);
  tenhour5();
  delay(xyz);
  tenhour6();
  delay(xyz);
  second0();
  delay (X);
  second1();
  delay (X);
  second2();
  delay (X);
  second3();
  delay (X);
  second4();
  delay (X);
  second5();
  delay (X);
  second6();
  delay (X);
  second7();
  delay (X);
  second8();
  delay (X);
  second9();
  delay (X);
  tensecond0();
  delay (Y);
  tensecond1();
  delay (Y);
  tensecond2();
  delay (Y);
  tensecond3();
  delay (Y);
  tensecond4();
  delay (Y);
  tensecond5();
  delay (Y);
  tensecond6();
  delay (Y);
  
}

void minut0() {
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(h, HIGH);
}

void minut1() {
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(h, HIGH);
}

void minut2() {
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(h, HIGH);
}

void minut3() {
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(h, HIGH);
}

void minut4() {
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(h, HIGH);
}

void minut5() {
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(h, HIGH);
}

void minut6() {
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(h, HIGH);
}

void minut7() {
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(h, HIGH);
}

void minut8() {
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(h, HIGH);
}

void minut9() {
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(h, HIGH);
}
void tenminut0() {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
  digitalWrite(H, HIGH);
}

void tenminut1() {
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(H, HIGH);
}

void tenminut2() {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW);
  digitalWrite(H, HIGH);

}

void tenminut3() {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW);
  digitalWrite(H, HIGH);
}

void tenminut4() {
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(H, HIGH);
}

void tenminut5() {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(H, HIGH);
}

void tenminut6() {
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(H, HIGH);
}
void hour0() {
  digitalWrite(ab, LOW);
  digitalWrite(bc, LOW);
  digitalWrite(cd, LOW);
  digitalWrite(de, LOW);
  digitalWrite(ef, LOW);
  digitalWrite(fg, LOW);
  digitalWrite(gh, HIGH);
  digitalWrite(hi, HIGH);
}

void hour1() {
  digitalWrite(ab, HIGH);
  digitalWrite(bc, LOW);
  digitalWrite(cd, LOW);
  digitalWrite(de, HIGH);
  digitalWrite(ef, HIGH);
  digitalWrite(fg, HIGH);
  digitalWrite(fg, HIGH);
  digitalWrite(gh, HIGH);
}

void hour2() {
  digitalWrite(ab, LOW);
  digitalWrite(bc, LOW);
  digitalWrite(cd, HIGH);
  digitalWrite(de, LOW);
  digitalWrite(ef, LOW);
  digitalWrite(fg, HIGH);
  digitalWrite(gh, LOW);
  digitalWrite(hi, HIGH);
}

void hour3() {
  digitalWrite(ab, LOW);
  digitalWrite(bc, LOW);
  digitalWrite(cd, LOW);
  digitalWrite(de, LOW);
  digitalWrite(ef, HIGH);
  digitalWrite(fg, HIGH);
  digitalWrite(gh, LOW);
  digitalWrite(hi, HIGH);
}

void hour4() {
  digitalWrite(ab, HIGH);
  digitalWrite(bc, LOW);
  digitalWrite(cd, LOW);
  digitalWrite(de, HIGH);
  digitalWrite(ef, HIGH);
  digitalWrite(fg, LOW);
  digitalWrite(gh, LOW);
  digitalWrite(hi, HIGH);
}

void hour5() {
  digitalWrite(ab, LOW);
  digitalWrite(bc, LOW);
  digitalWrite(de, LOW);
  digitalWrite(ef, HIGH);
  digitalWrite(fg, LOW);
  digitalWrite(gh, LOW);
  digitalWrite(hi, HIGH);
}

void hour6() {
  digitalWrite(ab, LOW);
  digitalWrite(bc, HIGH);
  digitalWrite(cd, LOW);
  digitalWrite(de, LOW);
  digitalWrite(ef, LOW);
  digitalWrite(fg, LOW);
  digitalWrite(gh, LOW);
  digitalWrite(hi, HIGH);
}

void hour7() {
  digitalWrite(ab, LOW);
  digitalWrite(bc, LOW);
  digitalWrite(cd, LOW);
  digitalWrite(de, LOW);
  digitalWrite(ef, LOW);
  digitalWrite(fg, LOW);
  digitalWrite(gh, LOW);
  digitalWrite(hi, HIGH);
}

void hour8() {
  digitalWrite(ab, LOW);
  digitalWrite(bc, LOW);
  digitalWrite(cd, LOW);
  digitalWrite(de, LOW);
  digitalWrite(ef, LOW);
  digitalWrite(fg, LOW);
  digitalWrite(gh, LOW);
  digitalWrite(hi, HIGH);
}

void hour9() {
  digitalWrite(ab, LOW);
  digitalWrite(bc, LOW);
  digitalWrite(cd, LOW);
  digitalWrite(de, LOW);
  digitalWrite(ef, LOW);
  digitalWrite(fg, LOW);
  digitalWrite(gh, HIGH);
  digitalWrite(hi, HIGH);
}
void tenhour0() {
  digitalWrite(AB, LOW);
  digitalWrite(BC, LOW);
  digitalWrite(CD, LOW);
  digitalWrite(DE, LOW);
  digitalWrite(EF, LOW);
  digitalWrite(FG, LOW);
  digitalWrite(GH, HIGH);
  digitalWrite(HI, HIGH);
}

void tenhour1() {
  digitalWrite(AB, HIGH);
  digitalWrite(BC, LOW);
  digitalWrite(CD, LOW);
  digitalWrite(DE, HIGH);
  digitalWrite(EF, HIGH);
  digitalWrite(FG, HIGH);
  digitalWrite(FG, HIGH);
  digitalWrite(GH, HIGH);
}

void tenhour2() {
  digitalWrite(AB, LOW);
  digitalWrite(BC, LOW);
  digitalWrite(CD, HIGH);
  digitalWrite(DE, LOW);
  digitalWrite(EF, LOW);
  digitalWrite(FG, HIGH);
  digitalWrite(GH, LOW);
  digitalWrite(HI, HIGH);
}

void tenhour3() {
  digitalWrite(AB, LOW);
  digitalWrite(BC, LOW);
  digitalWrite(CD, LOW);
  digitalWrite(DE, LOW);
  digitalWrite(EF, HIGH);
  digitalWrite(FG, HIGH);
  digitalWrite(GH, LOW);
  digitalWrite(HI, HIGH);
}

void tenhour4() {
  digitalWrite(AB, HIGH);
  digitalWrite(BC, LOW);
  digitalWrite(CD, LOW);
  digitalWrite(DE, HIGH);
  digitalWrite(EF, HIGH);
  digitalWrite(FG, LOW);
  digitalWrite(GH, LOW);
  digitalWrite(HI, HIGH);
}

void tenhour5() {
  digitalWrite(AB, LOW);
  digitalWrite(BC, LOW);
  digitalWrite(DE, LOW);
  digitalWrite(EF, HIGH);
  digitalWrite(FG, LOW);
  digitalWrite(GH, LOW);
  digitalWrite(HI, HIGH);
}

void tenhour6() {
  digitalWrite(AB, LOW);
  digitalWrite(BC, HIGH);
  digitalWrite(CD, LOW);
  digitalWrite(DE, LOW);
  digitalWrite(EF, LOW);
  digitalWrite(FG, LOW);
  digitalWrite(GH, LOW);
  digitalWrite(HI, HIGH);
}
void second0() {
  digitalWrite(abc, LOW);
  digitalWrite(bcd, LOW);
  digitalWrite(cde, LOW);
  digitalWrite(def, LOW);
  digitalWrite(efg, LOW);
  digitalWrite(fgh, LOW);
  digitalWrite(ghi, HIGH);
  digitalWrite(hij, HIGH);
}

void second1() {
  digitalWrite(abc, HIGH);
  digitalWrite(bcd, LOW);
  digitalWrite(cde, LOW);
  digitalWrite(def, HIGH);
  digitalWrite(efg, HIGH);
  digitalWrite(fgh, HIGH);
  digitalWrite(fgh, HIGH);
  digitalWrite(ghi, HIGH);
}

void second2() {
  digitalWrite(abc, LOW);
  digitalWrite(bcd, LOW);
  digitalWrite(cde, HIGH);
  digitalWrite(def, LOW);
  digitalWrite(efg, LOW);
  digitalWrite(fgh, HIGH);
  digitalWrite(ghi, LOW);
  digitalWrite(hij, HIGH);
}

void second3() {
  digitalWrite(abc, LOW);
  digitalWrite(bcd, LOW);
  digitalWrite(cde, LOW);
  digitalWrite(def, LOW);
  digitalWrite(efg, HIGH);
  digitalWrite(fgh, HIGH);
  digitalWrite(ghi, LOW);
  digitalWrite(hij, HIGH);
}

void second4() {
  digitalWrite(abc, HIGH);
  digitalWrite(bcd, LOW);
  digitalWrite(cde, LOW);
  digitalWrite(def, HIGH);
  digitalWrite(efg, HIGH);
  digitalWrite(fgh, LOW);
  digitalWrite(ghi, LOW);
  digitalWrite(hij, HIGH);
}

void second5() {
  digitalWrite(abc, LOW);
  digitalWrite(bcd, LOW);
  digitalWrite(def, LOW);
  digitalWrite(efg, HIGH);
  digitalWrite(fgh, LOW);
  digitalWrite(ghi, LOW);
  digitalWrite(hij, HIGH);
}

void second6() {
  digitalWrite(abc, LOW);
  digitalWrite(bcd, HIGH);
  digitalWrite(cde, LOW);
  digitalWrite(def, LOW);
  digitalWrite(efg, LOW);
  digitalWrite(fgh, LOW);
  digitalWrite(ghi, LOW);
  digitalWrite(hij, HIGH);
}

void second7() {
  digitalWrite(abc, LOW);
  digitalWrite(bcd, LOW);
  digitalWrite(cde, LOW);
  digitalWrite(def, LOW);
  digitalWrite(efg, LOW);
  digitalWrite(fgh, LOW);
  digitalWrite(ghi, LOW);
  digitalWrite(hij, HIGH);
}

void second8() {
  digitalWrite(abc, LOW);
  digitalWrite(bcd, LOW);
  digitalWrite(cde, LOW);
  digitalWrite(def, LOW);
  digitalWrite(efg, LOW);
  digitalWrite(fgh, LOW);
  digitalWrite(ghi, LOW);
  digitalWrite(hij, HIGH);
}

void second9() {
  digitalWrite(abc, LOW);
  digitalWrite(bcd, LOW);
  digitalWrite(cde, LOW);
  digitalWrite(def, LOW);
  digitalWrite(efg, LOW);
  digitalWrite(fgh, LOW);
  digitalWrite(ghi, HIGH);
  digitalWrite(hij, HIGH);
}

void tensecond0() {
  digitalWrite(ABC, LOW);
  digitalWrite(BCD, LOW);
  digitalWrite(CDE, LOW);
  digitalWrite(DEF, LOW);
  digitalWrite(EFG, LOW);
  digitalWrite(FGH, LOW);
  digitalWrite(GHI, HIGH);
  digitalWrite(HIJ, HIGH);
}

void tensecond1() {
  digitalWrite(ABC, HIGH);
  digitalWrite(BCD, LOW);
  digitalWrite(CDE, LOW);
  digitalWrite(DEF, HIGH);
  digitalWrite(EFG, HIGH);
  digitalWrite(FGH, HIGH);
  digitalWrite(FGH, HIGH);
  digitalWrite(GHI, HIGH);
}

void tensecond2() {
  digitalWrite(ABC, LOW);
  digitalWrite(BCD, LOW);
  digitalWrite(CDE, HIGH);
  digitalWrite(DEF, LOW);
  digitalWrite(EFG, LOW);
  digitalWrite(FGH, HIGH);
  digitalWrite(GHI, LOW);
  digitalWrite(HIJ, HIGH);
}

void tensecond3() {
  digitalWrite(ABC, LOW);
  digitalWrite(BCD, LOW);
  digitalWrite(CDE, LOW);
  digitalWrite(DEF, LOW);
  digitalWrite(EFG, HIGH);
  digitalWrite(FGH, HIGH);
  digitalWrite(GHI, LOW);
  digitalWrite(HIJ, HIGH);
}

void tensecond4() {
  digitalWrite(ABC, HIGH);
  digitalWrite(BCD, LOW);
  digitalWrite(CDE, LOW);
  digitalWrite(DEF, HIGH);
  digitalWrite(EFG, HIGH);
  digitalWrite(FGH, LOW);
  digitalWrite(GHI, LOW);
  digitalWrite(HIJ, HIGH);
}

void tensecond5() {
  digitalWrite(ABC, LOW);
  digitalWrite(BCD, LOW);
  digitalWrite(DEF, LOW);
  digitalWrite(EFG, HIGH);
  digitalWrite(FGH, LOW);
  digitalWrite(GHI, LOW);
  digitalWrite(HIJ, HIGH);
}

void tensecond6() {
  digitalWrite(ABC, LOW);
  digitalWrite(BCD, HIGH);
  digitalWrite(CDE, LOW);
  digitalWrite(DEF, LOW);
  digitalWrite(EFG, LOW);
  digitalWrite(FGH, LOW);
  digitalWrite(GHI, LOW);
  digitalWrite(HIJ, HIGH);
}
