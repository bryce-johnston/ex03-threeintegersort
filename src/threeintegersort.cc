namespace edu{
    namespace vcccd{
        namespace vc{
            namespace csv13{
                void sort(int& int1, int& int2, int& int3){
                    int temp;
                    while(!(int1 < int2 && int2 < int3)){
                        if (int1 > int2){
                            temp = int1;
                            int1 = int2;
                            int2 = temp;
                        }
                        if (int2 > int3){
                            temp = int2;
                            int2 = int3;
                            int3 = temp;
                        }
                    }
                }
            }
        }
    }
}