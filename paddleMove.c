#include "config.h"
#include "copyArrayData.h"
void paddleMove(uchar padPos)
{
uchar x;
bool pad1[8]={0,0,0,0,0,1,1,1};     // paddle at bottom position
bool pad2[8]={0,0,0,0,1,1,1,0};
bool pad3[8]={0,0,0,1,1,1,0,0};
bool pad4[8]={0,0,1,1,1,0,0,0};
bool pad5[8]={0,1,1,1,0,0,0,0};
bool pad6[8]={1,1,1,0,0,0,0,0};     // paddle at top position

        switch(padPos)
        {
                case 1:
                    for(x=0; x<8; x++)// x is equivalent to row
                    {
                        copyArrayData(pad1[x],x);
                    }
                    break;

                case 2:
                    for(x=0; x<8; x++)
                    {
                        copyArrayData(pad2[x],x);
                    }
                    break;
                case 3:
                    for(x=0; x<8; x++)
                    {
                        copyArrayData(pad3[x],x);
                    }
                    break;
                case 4:
                    for(x=0; x<8; x++)
                    {
                        copyArrayData(pad4[x],x);
                    }
                    break;
                case 5:
                    for(x=0; x<8; x++)
                    {
                        copyArrayData(pad5[x],x);
                    }
                    break;
                case 6:
                    for(x=0; x<8; x++)
                    {
                        copyArrayData(pad6[x],x);
                    }
                    break;
        }
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      