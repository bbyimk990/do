#include<fstream>
#include<iostream>
#include<string>
using namespace std;
/**This source code use to generate cnTelephone-number(11)
中国电信号段(cnTelecom)
133、149、153、173、177、180、181、189、199
中国联通号段(cnUnicom)
130、131、132、145、155、156、166、171、175、176、185、186
中国移动号段(cnMobile)
134(0-8)、135、136、137、138、139、147、150、151、152、157、158、159、172、178、182、183、184、187、188、198
其他号段
14号段以前为上网卡专属号段，如中国联通的是145，中国移动的是147等等。
虚拟运营商
电信：1700、1701、1702
移动：1703、1705、1706
联通：1704、1707、1708、1709、171
卫星通信：1349
 */
int main(){
  long t1=13300000000,t2=14900000000,t3=15300000000,t4=17300000000,t5=17700000000,t6=18000000000,t7=18100000000,t8=18900000000,t9=19900000000,t10=17000000000,t11=17010000000,t12=17020000000;
    ;
     long u1=13000000000,u2=13100000000,u3=13200000000,u4=14500000000,u5=15500000000,u6=15600000000,u7=16600000000,u8=17100000000,u9=17500000000,u10=17600000000,u11=18500000000,u12=18600000000,u13=17040000000,u14=17070000000,u15=17080000000,u16=17090000000;
      long m1=13400000000,m2=13500000000,m3=13600000000,m4=13700000000,m5=13800000000,m6=13900000000,m7=14700000000,m8=15000000000,m9=15100000000,m10=15200000000,m11=15700000000,m12=15800000000,
        m13=15900000000,m14=17200000000,m15=17800000000,m16=18200000000,m17=18300000000,m18=18400000000,m19=18700000000,m20=18800000000,m21=19800000000,m22=17030000000,m23=17050000000,m24=170600000000;

      fstream oft;
      oft.open("/home/ydssbbnc/store/hack/dictionary/cnTelecom.txt");//change it to fit your directory
      fstream ofu;
      ofu.open("/home/ydssbbnc/store/hack/dictionary/cnUnicom.txt");//change it to fit your directory
      fstream ofm;
      ofm.open("/home/ydssbbnc/store/hack/dictionary/cnMobile.txt");//change it to fit your directory
  for(long l=0;l<=99999999;l++){
    oft<<t1<<"\n"<<t2<<"\n"<<t3<<"\n"<<t4<<"\n"<<t5<<"\n"<<t6<<"\n"<<t7<<"\n"<<t8<<"\n"<<t9<<"\n"<<t10<<"\n";
       ofu<<u1<<"\n"<<u2<<"\n"<<u3<<"\n"<<u4<<"\n"<<u5<<"\n"<<u6<<"\n"<<u7<<"\n"<<u8<<"\n"<<u9<<"\n"<<u10<<"\n"<<u11<<"\n"<<u12<<"\n";
       ofm<<m1<<"\n"<<m2<<"\n"<<m3<<"\n"<<m4<<"\n"<<m5<<"\n"<<m6<<"\n"<<m7<<"\n"<<m8<<"\n"<<m9<<"\n"<<m10<<"\n"<<m11<<"\n"<<m12<<"\n"<<m13<<"\n"<<m14<<"\n"<<m15<<"\n"<<m16<<"\n"<<m17<<"\n"<<m18<<"\n"<<m19<<"\n"<<m20<<"\n"<<m21<<"\n";
    t1++;t2++;t3++;t4++;t5++;t6++;t7++;t8++;t9++;t10++;
       u1++;u2++;u3++;u4++;u5++;u6++;u7++;u8++;u9++;u10++;u11++;u12++;
       m1++;m2++;m3++;m4++;m5++;m6++;m7++;m8++;m9++;m10++;m11++;m12++;m13++;m14++;m15++;m16++;m17++;m18++;m19++;m20++;m21++;
  }
  for(long o=0;o<=9999999;o++){
    oft<<t11<<"\n"<<t12<<"\n";
       ofu<<u13<<"\n"<<u14<<"\n"<<u15<<"\n"<<u16<<"\n";
       ofm<<m22<<"\n"<<m23<<"\n"<<m24<<"\n";
  }
  return 0;
}
