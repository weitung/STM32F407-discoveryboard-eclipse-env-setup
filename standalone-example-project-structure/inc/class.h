#ifndef COMPLEX_H__
#define COMPLEX_H__

class complex 
{
public:
        void setvals(float r, float i) {
                real=r;
                imag=i;
        }
        void getvals(float &r, float &i) {
                r=real;
                i=imag;
        }
private: 
        float real;
        float imag;
};

struct result_type {
	float amp;
	float freq;
	float phase;
};

#endif
