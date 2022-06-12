class ParkingSystem {
    int b,m,s;
public:
    ParkingSystem(int big, int medium, int small) {
        b=big;
        m=medium;
        s=small;
    }
    
    bool addCar(int carType) {
        switch(carType) {
            case 1:
                if(b>0) {
                    b--;
                    return true;
                }
                return false;
                break;
            case 2:
                if(m>0) {
                    m--;
                    return true;
                }
                return false;
                break;
            case 3:
                if(s>0) {
                    s--;
                    return true;
                }
                return false;
                break;
        }
        return false;
    }
};