#ifndef BASE_H
#define BASE_H

class Base
{
    protected:
        double Energy;
        double FoodStock;
        double WoodStock;
        int Level;

    public:
        Base()
        {
            this -> Energy=0;
            this -> FoodStock=0;
            this -> WoodStock=0;
            this -> Level=0;
        }

        void SetStart();
        
};

#endif