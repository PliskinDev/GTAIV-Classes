#pragma once

namespace rage
{
    class scrRgba 
    {
    public:
        scrRgba() : r(0), g(0), b(0), a(255) {}
        scrRgba(int red, int green, int blue, int alpha = 255) : r(red), g(green), b(blue), a(alpha) {}

        void setRed(int red) { 
            r = red; 
        }
        
        void setGreen(int green) { 
            g = green; 
        }

        void setBlue(int blue) { 
            b = blue; 
        }

        void setAlpha(int alpha) { 
            a = alpha; 
        }

        int getRed() const { 
            return r; 
        }

        int getGreen() const { 
            return g; 
        }

        int getBlue() const { 
            return b;
        }

        int getAlpha() const { 
            return a;
        }

    private:
        int r, g, b, a;
    };
}