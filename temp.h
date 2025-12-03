#ifndef TEMP_h
#define TEMP_h

#define C_TO_F(c) ((c * 9 / 5) + 32)
#define F_TO_C(f) ((f-32)*5/9)

enum Unit { CELSIUS=1, FAHRENHEIT=2 };

void convertTemp( enum Unit from, float value);

#endif