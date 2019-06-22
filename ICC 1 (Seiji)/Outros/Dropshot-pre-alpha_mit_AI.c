#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
int R=42;
int Mi[5][11],HP[5][11];

void danora(int j){
    int d,i,aux,ap=0,I,c=0;
    srand(time(NULL)+R*R);

    aux=j;
    R=R+2;
    d=2+rand()%2;
    while(j<=aux+4 && ap!=1){
        R=R+7;
        if(Mi[0][j]==121||Mi[0][j]==120){
                if(j%12==1){c=0;}
            for(I=c;I<6;I++){
                    R=R*3;
            i=rand()%5;
            if(Mi[i][j]!=0 && HP[i][j]>0){HP[i][j]=HP[i][j]-d;break;}
            }ap=1;}
    j++;
    }}
void danoaa(int j){
     int d=1,i,aux,ap=0,I,c=0;
    srand(time(NULL)+R*R);

    aux=j;
    R=R+2;
    d=d+rand()%2;
    while(j<=aux+4 && ap!=1){

        if(j==0 || j==5 || j==10){d=d+2;}
        R=R+7;
        if(Mi[0][j]==121||Mi[0][j]==120){
                if(j%12==1){c=0;}
            for(I=c;I<6;I++){
                    R=R*3;
            i=rand()%5;
            if(Mi[i][j]!=0 && HP[i][j]>0){HP[i][j]=HP[i][j]-d;break;}
            }ap=1;}
    j++;
    }}
void danoma(int j){
     int d=1,i,aux,ap=0,I,c=0;
    srand(time(NULL)+R*R);
    if(j==0 || j==5 || j==10){d=3;}
    aux=j;
    R=R+2;
    d=d+rand()%2;
    while(j<=aux+4 && ap!=1){
        R=R+7;
        if(Mi[0][j]==121||Mi[0][j]==120){
            if(j%12==1){c=0;}
            for(I=c;I<6;I++){
                    R=R*3;
            i=rand()%5;
            if(Mi[i][j]!=0 && HP[i][j]>0){HP[i][j]=HP[i][j]-d;break;}
            }ap=1;}
    j++;
    }
}


void danors(int j){
    srand(time(NULL)+R*R);
    int d,i,aux,ap=0,I,c=0;
    aux=j;
    d=2+rand()%2;
    while(j>=aux-4 && ap!=1){
        R=R+7;
        if(Mi[0][j]==111||Mi[0][j]==110){
                if(j%11==1){c=2;}
            for(I=c;I<6;I++){
                    R=R*3;
            i=rand()%5;
            if(Mi[i][j]!=0 && HP[i][j]>0){HP[i][j]=HP[i][j]-d;break;}
            }ap=1;}
    j--;
    }
}
void danoas(int j){
    srand(time(NULL)+R*R);
    int d=3,i,aux,ap=0,I,c=0;
    aux=j;
    d=d+rand()%2;
    while(j>=aux-4 && ap!=1){
        if(j==0 || j==5 || j==10){d=d+2;}
        R=R+7;
        if(Mi[0][j]==111||Mi[0][j]==110){
            if(j%11==1){c=0;}
            for(I=c;I<6;I++){
                    R=R*3;
            i=rand()%5;
            if(Mi[i][j]!=0 && HP[i][j]>0){HP[i][j]=HP[i][j]-d;break;}
            }ap=1;}
    j--;
    }
}
void danoms(int j){
    srand(time(NULL)+R*R);
    int d=1,i,aux,ap=0,I,c=0;
    aux=j;
    if(j==0 || j==5 || j==10){d=3;}
    d=d+rand()%2;
    while(j>=aux-4 && ap!=1){
        R=R+7;
        if(Mi[0][j]==111||Mi[0][j]==110){
            if(j%11==1){c=0;}
            for(I=c;I<6;I++){
                    R=R*3;
            i=rand()%5;
            if(Mi[i][j]!=0 && HP[i][j]>0){HP[i][j]=HP[i][j]-d;break;}
            }ap=1;}
    j--;
    }
}



void warzone(){
    int j;

    for(j=0;j<11;j++){if(Mi[0][j]/100==1){Mi[0][j]=Mi[0][j]-100;}}

    for(j=0;j<11;j++){                          //declarando as Warzones.
            if ((Mi[0][j]%100==10||Mi[0][j]%100==11)&&(Mi[0][j+1]%100==20||Mi[0][j+1]%100==21)){
                    if(Mi[0][j]<100){Mi[0][j]=Mi[0][j]+100;}
                    if(Mi[0][j+1]<100){Mi[0][j+1]=Mi[0][j+1]+100;}
    }}
    for(j=0;j<11;j++){                          //declarando as Warzones.
            if ((Mi[0][j]%100==10||Mi[0][j]%100==11)&&(Mi[0][j+2]%100==20||Mi[0][j+2]%100==21)){
                    if(Mi[0][j]<100){Mi[0][j]=Mi[0][j]+100;}
                    if(Mi[0][j+2]<100){Mi[0][j+2]=Mi[0][j+2]+100;}
    }}
    for(j=0;j<11;j++){                          //declarando as Warzones.
            if ((Mi[0][j]%100==10||Mi[0][j]%100==11)&&(Mi[0][j+3]%100==20||Mi[0][j+3]%100==21)){
                    if(Mi[0][j]<100){Mi[0][j]=Mi[0][j]+100;}
                    if(Mi[0][j+3]<100){Mi[0][j+3]=Mi[0][j+3]+100;}
    }}

    for(j=0;j<11;j++){                          //declarando as Warzones.
            if ((Mi[0][j]%100==10||Mi[0][j]%100==11)&&(Mi[0][j+4]%100==20||Mi[0][j+4]%100==21)){
                    if(Mi[0][j]<100){Mi[0][j]=Mi[0][j]+100;}
                    if(Mi[0][j+4]<100){Mi[0][j+4]=Mi[0][j+4]+100;}
    }}
}

void combate(){
    int j,i;
    int ra=0,aa=0,ma=0,rs=0,as=0,ms=0;

    for(j=0;j<=10;j++){                   //combate (ou tentariva de)
            if(Mi[0][j]/100==1){
                for(i=1;i<5;i++){
                    switch (Mi[i][j]){
                        case 11: ra++;break;
                        case 12: aa++;break;
                        case 13: ma++;break;
                        case 21: rs++;break;
                        case 22: as++;break;
                        case 23: ms++;break;
                        }}
                while(ra>0){
                    ra--;
                    danora(j);
                }
               while(aa>0){
                    aa--;
                    danoaa(j);
                }
                while(ma>0){
                    ma--;
                    danoma(j);
                }
                while(rs>0){
                    rs--;
                    danors(j);
                }

                while(as>0){
                    as--;
                    danoas(j);
                }
                while(ms>0){
                    ms--;
                    danoms(j);
                }
            }}
ra=aa=ma=rs=as=ms=0;
}

void artilharia(int j){

    srand(time(NULL)+R*R);
    int d=3,i,aux,c=0,t,aux2;
    for(t=10;t>0;t--){
        d=d+rand()%5;
        R=R+7;
        aux=rand()%3;
        R=R+1;
        aux2=j+aux-1;
        if(aux2<10 || aux2>0){
            i=rand()%5;
            R=R*3;
            HP[i][aux2]=HP[i][aux2]-d;
    }}
    printf("\n\nArtilharia lançada!\n\n");
}

void obitos(){
    int j,i;
    for(j=10;j>=0;j--){
        if(HP[0][j]<0){HP[0][j]=0;}
        for(i=4;i>0;i--){
            if(HP[i][j]<=0){Mi[i][j]=0;HP[i][j]=0;}
}}}

void movimento(){
    int j,i,auxU,auxH;
        for(i=1;i<5;i++){                   //Ocidentais
            for(j=8;j>=0;j--){
                if(Mi[0][j]%10!=1 && Mi[0][j]/100==0){if(Mi[i][j]/10==1){
                    if(Mi[i][j+1]==0 && Mi[0][j]/10!=1 && Mi[0][j]/10!=2){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[i][j+1]=auxU;HP[i][j+1]=auxH;auxU=auxH=0;}
                    else if(Mi[1][j+1]==0 && Mi[0][j]/100!=1){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[1][j+1]=auxU;HP[1][j+1]=auxH;auxU=auxH=0;}
                    else if(Mi[2][j+1]==0 && Mi[0][j]/100!=1){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[2][j+1]=auxU;HP[2][j+1]=auxH;auxU=auxH=0;}
                    else if(Mi[3][j+1]==0 && Mi[0][j]/100!=1){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[3][j+1]=auxU;HP[3][j+1]=auxH;auxU=auxH=0;}
                    else if(Mi[4][j+1]==0 && Mi[0][j]/100!=1){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[4][j+1]=auxU;HP[4][j+1]=auxH;auxU=auxH=0;}
                }}}}

        for(i=1;i<5;i++){                                                       //aqui é o mecanismo de movimento dos soldados, contanto que eles estejam fora de um checkpoint.
            for(j=2;j<=10;j++){                                             //Orientais
                if(Mi[0][j]%10!=1 && Mi[0][j]/100==0){if(Mi[i][j]/10==2){
                    if(Mi[i][j-1]==0 && Mi[0][j]/10!=1 && Mi[0][j]/10!=2){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[i][j-1]=auxU;HP[i][j-1]=auxH;auxU=auxH=0;}
                    else if(Mi[1][j-1]==0 && Mi[0][j]/100!=1){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[1][j-1]=auxU;HP[1][j-1]=auxH;auxU=auxH=0;}
                    else if(Mi[2][j-1]==0 && Mi[0][j]/100!=1){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[2][j-1]=auxU;HP[2][j-1]=auxH;auxU=auxH=0;}
                    else if(Mi[3][j-1]==0 && Mi[0][j]/100!=1){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[3][j-1]=auxU;HP[3][j-1]=auxH;auxU=auxH=0;}
                    else if(Mi[4][j-1]==0 && Mi[0][j]/100!=1){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[4][j-1]=auxU;HP[4][j-1]=auxH;auxU=auxH=0;}
                }}}}}

void posse(){
    int i,j,am,ru;

       for(j=1;j<10;j++){                          //declarando posse de terreno. Se uma unidade múltipla de 20 está em um terreno, ele é russo, e vice e versa.
            am=ru=0;
            for(i=1;i<5;i++){
                if(Mi[i][j]/10==1){am=am+1;}
                if(Mi[i][j]/10==2){ru=ru+1;}
            }

            if(am>0){if(Mi[0][j]==1 || Mi[0][j]==0){Mi[0][j]=Mi[0][j]+10;}}
            else if(ru>0){if(Mi[0][j]==1 || Mi[0][j]==0){Mi[0][j]=Mi[0][j]+20;}}
            else{if(Mi[0][j]%10==1){Mi[0][j]=1;}else if(Mi[0][j]%10==0){Mi[0][j]=0;}}

        }
}

int AIscan(){
    int stance=0,pridef,priatk,posi;
    int j,i;
    int ra=0,aa=0,ma=0,rs=0,as=0,ms=0;

    for(j=0;j<=10;j++){
            if(Mi[0][j]/100==1){
                for(i=1;i<5;i++){
                    switch (Mi[i][j]){
                        case 11: ra++;break;
                        case 12: aa++;break;
                        case 13: ma++;break;
                        case 21: rs++;break;
                        case 22: as++;break;
                        case 23: ms++;break;
                        }}}}

    if(Mi[0][5]/10==0){
        posi=0;
    }
    else if(Mi[0][5]/10==1 || Mi[0][6]/10==1){
        posi=1;
    }
    else if(Mi[0][5]/10==2){
        posi=2;
    }
    if(aa>=ma && aa>=ra && posi==1){stance=1;}            //postura 1: comprar metralhadoras e manter a base
    else if(aa>=ma && aa>=ra && posi==0){stance=2;}       //postura 2: comprar assaltos e conquistar terreno
    else if(ma>=aa && ma>=ra && posi==2){stance=3;}       //postura 3: comprar fuzileiros e invadir a base inimiga
    else if(ra>=ma && ra>=aa && posi==1){stance=4;}       //postura 4: comprar fuzileiros e tomar o checkpoint
    else if(aa>=ma && aa>=ra && posi==2){stance=5;}       //postura 5: comprar metralhadoras e manter o checkpoint
    else if(posi==2){stance=3;}                         //postura 3: (again, para ele continuar tentando)
    printf("Stance %d\n",stance);
    return stance;
}



void fase1(){

    int i, j,turno,Dollar=0,Rublo=0,e,auxU,auxH,stance;

    srand(time(NULL)+R*R);
    for(i=0;i<=4;i++){           //partida iniciada!
        for(j=0;j<=11;j++){
            Mi[i][j]=0;HP[i][j]=0;
        }
    }
    Mi[0][0]=11;Mi[0][5]=1;Mi[0][10]=21;HP[0][0]=100;HP[0][10]=100;       //essas são as posições que representam Checkpoints.

    Dollar=25;Rublo=25;
    do{
        turno=0;

        warzone();

        combate();

        movimento();

        obitos();

        posse();

        for(i=0;i<5;i++){
        for(j=0;j<11;j++){
            printf("|%3d|",Mi[i][j]);
        }printf("\n");}
        printf("\n\n\n");
    for(i=0;i<5;i++){
        for(j=0;j<11;j++){
            printf("|%3d|",HP[i][j]);
        }printf("\n");}

        Dollar=Dollar+5;
        Rublo=Rublo+5;

    stance=AIscan();
        i=0;
        if (stance==1){
                printf("Stance %d\n",stance);
            while(Mi[i][10]!=0){i++;}
            if(i<5 && Rublo>=10){Mi[i][10]=23;HP[i][10]=10;Rublo=Rublo-10;}
        }
        else if(stance==0){
            printf("Stance %d\n",stance);
            while(Mi[i][10]!=0){i++;}
            if(i<5 && Rublo>=10){Mi[i][10]=21;HP[i][10]=10;Rublo=Rublo-10;}

            j=10;                       //tirando os russos de suas bases (nota-se que eles andam um espaço a mais, no total)
            for(i=4;i>0;i--){
            if(Mi[i][10]/10==2){if(Mi[i][9]==0){auxU=Mi[i][10];Mi[i][10]=0;auxH=HP[i][10];HP[i][10]=0;Mi[i][9]=auxU;HP[i][9]=auxH;auxU=auxH=0;}
            else if(Mi[1][j-1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[1][j-1]=auxU;HP[1][j-1]=auxH;auxU=auxH=0;}
            else if(Mi[2][j-1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[2][j-1]=auxU;HP[2][j-1]=auxH;auxU=auxH=0;}
            else if(Mi[3][j-1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[3][j-1]=auxU;HP[3][j-1]=auxH;auxU=auxH=0;}
            else if(Mi[4][j-1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[4][j-1]=auxU;HP[4][j-1]=auxH;auxU=auxH=0;}
            }}
        }
        else if(stance==2){
                printf("Stance %d\n",stance);
            while(Mi[i][10]!=0){i++;}
                if(i<5 && Rublo>=10){Mi[i][10]=22;HP[i][10]=10;Rublo=Rublo-10;}

                j=10;                       //tirando os russos de suas bases (nota-se que eles andam um espaço a mais, no total)
                        for(i=4;i>0;i--){
                        if(Mi[i][10]/10==2){if(Mi[i][9]==0){auxU=Mi[i][10];Mi[i][10]=0;auxH=HP[i][10];HP[i][10]=0;Mi[i][9]=auxU;HP[i][9]=auxH;auxU=auxH=0;}
                        else if(Mi[1][j-1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[1][j-1]=auxU;HP[1][j-1]=auxH;auxU=auxH=0;}
                        else if(Mi[2][j-1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[2][j-1]=auxU;HP[2][j-1]=auxH;auxU=auxH=0;}
                        else if(Mi[3][j-1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[3][j-1]=auxU;HP[3][j-1]=auxH;auxU=auxH=0;}
                        else if(Mi[4][j-1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[4][j-1]=auxU;HP[4][j-1]=auxH;auxU=auxH=0;}
                    }}
        }
        else if(stance==3){
                printf("Stance %d\n",stance);
            while(Mi[i][10]!=0){i++;}
                if(i<5 && Rublo>=10){Mi[i][10]=21;HP[i][10]=10;Rublo=Rublo-10;}
                j=10;                       //tirando os russos de suas bases (nota-se que eles andam um espaço a mais, no total)
                        for(i=4;i>0;i--){
                        if(Mi[i][10]/10==2){if(Mi[i][9]==0){auxU=Mi[i][10];Mi[i][10]=0;auxH=HP[i][10];HP[i][10]=0;Mi[i][9]=auxU;HP[i][9]=auxH;auxU=auxH=0;}
                        else if(Mi[1][j-1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[1][j-1]=auxU;HP[1][j-1]=auxH;auxU=auxH=0;}
                        else if(Mi[2][j-1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[2][j-1]=auxU;HP[2][j-1]=auxH;auxU=auxH=0;}
                        else if(Mi[3][j-1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[3][j-1]=auxU;HP[3][j-1]=auxH;auxU=auxH=0;}
                        else if(Mi[4][j-1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[4][j-1]=auxU;HP[4][j-1]=auxH;auxU=auxH=0;}
                    }}
                    j=5;
                        for(i=4;i>0;i--){
                        if(Mi[i][5]/10==2){if(Mi[i][4]==0){auxU=Mi[i][5];Mi[i][5]=0;auxH=HP[i][5];HP[i][5]=0;Mi[i][4]=auxU;HP[i][4]=auxH;auxU=auxH=0;}
                        else if(Mi[1][j-1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[1][j-1]=auxU;HP[1][j-1]=auxH;auxU=auxH=0;}
                        else if(Mi[2][j-1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[2][j-1]=auxU;HP[2][j-1]=auxH;auxU=auxH=0;}
                        else if(Mi[3][j-1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[3][j-1]=auxU;HP[3][j-1]=auxH;auxU=auxH=0;}
                        else if(Mi[4][j-1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[4][j-1]=auxU;HP[4][j-1]=auxH;auxU=auxH=0;}
                    }}
        }
        else if(stance==4){
            while(Mi[i][10]!=0){i++;}
                if(i<5){Mi[i][10]=21;HP[i][10]=10;Rublo=Rublo-10;}
                j=10;                       //tirando os russos de suas bases (nota-se que eles andam um espaço a mais, no total)
                        for(i=4;i>0;i--){
                        if(Mi[i][10]/10==2){if(Mi[i][9]==0){auxU=Mi[i][10];Mi[i][10]=0;auxH=HP[i][10];HP[i][10]=0;Mi[i][9]=auxU;HP[i][9]=auxH;auxU=auxH=0;}
                        else if(Mi[1][j-1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[1][j-1]=auxU;HP[1][j-1]=auxH;auxU=auxH=0;}
                        else if(Mi[2][j-1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[2][j-1]=auxU;HP[2][j-1]=auxH;auxU=auxH=0;}
                        else if(Mi[3][j-1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[3][j-1]=auxU;HP[3][j-1]=auxH;auxU=auxH=0;}
                        else if(Mi[4][j-1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[4][j-1]=auxU;HP[4][j-1]=auxH;auxU=auxH=0;}
                    }}
        }
        else if(stance==5){
            while(Mi[i][10]!=0){i++;}
                if(i<5 && Rublo>=10){Mi[i][10]=23;HP[i][10]=10;Rublo=Rublo-10;}
                j=10;                       //tirando os russos de suas bases (nota-se que eles andam um espaço a mais, no total)
                        for(i=4;i>0;i--){
                        if(Mi[i][10]/10==2){if(Mi[i][9]==0){auxU=Mi[i][10];Mi[i][10]=0;auxH=HP[i][10];HP[i][10]=0;Mi[i][9]=auxU;HP[i][9]=auxH;auxU=auxH=0;}
                        else if(Mi[1][j-1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[1][j-1]=auxU;HP[1][j-1]=auxH;auxU=auxH=0;}
                        else if(Mi[2][j-1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[2][j-1]=auxU;HP[2][j-1]=auxH;auxU=auxH=0;}
                        else if(Mi[3][j-1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[3][j-1]=auxU;HP[3][j-1]=auxH;auxU=auxH=0;}
                        else if(Mi[4][j-1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[4][j-1]=auxU;HP[4][j-1]=auxH;auxU=auxH=0;}
                    }}
        }



        printf("\n\n %d Dollars e %d Rublos",Dollar,Rublo);
        do{
            printf("\n\nDeseja comprar unidades ou movê-las?(1-Comprar fuzileiro americano 2-Comprar Assalto americano 3-Comprar metralhadora americana 4-Avançar com os americanos 0-sair)");
            scanf("%d",&e);
            i=1;
            if(e==1){
                while(Mi[i][0]!=0){i++;}
                if(i<5 && Dollar>=10){Mi[i][0]=11;HP[i][0]=10;Dollar=Dollar-10;}
                else{printf("\nNão há mais espaços sobrando/dinheiro para a compra");}}

            if(e==2){while(Mi[i][0]!=0){i++;}
                if(i<5 && Dollar>=10){Mi[i][0]=12;HP[i][0]=10;Dollar=Dollar-10;}
                else{printf("\nNão há mais espaços sobrando/dinheiro para a compra");}}

            if(e==3){while(Mi[i][0]!=0){i++;}
                if(i<5 && Dollar>=10){Mi[i][0]=13;HP[i][0]=10;Dollar=Dollar-10;}
                else{printf("\nNão há mais espaços sobrando/dinheiro para a compra");}}

            if(e==4){
                printf("\nAvançar em qual posição?(Checkpoint A=1, Checkpoint B=2, Checkpoint C=3)");
                scanf("%d",&e);
                switch (e){
                    case 1:
                        j=0;
                        for(i=4;i>0;i--){
                        if(Mi[i][0]/10==1)if(Mi[i][1]==0){auxU=Mi[i][0];Mi[i][0]=0;auxH=HP[i][0];HP[i][0]=0;Mi[i][1]=auxU;HP[i][1]=auxH;auxU=auxH=0;}
                                            else if(Mi[1][j+1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[1][j+1]=auxU;HP[1][j+1]=auxH;auxU=auxH=0;}
                                            else if(Mi[2][j+1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[2][j+1]=auxU;HP[2][j+1]=auxH;auxU=auxH=0;}
                                            else if(Mi[3][j+1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[3][j+1]=auxU;HP[3][j+1]=auxH;auxU=auxH=0;}
                                            else if(Mi[4][j+1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[4][j+1]=auxU;HP[4][j+1]=auxH;auxU=auxH=0;}
                    }break;

                    case 2:                             //tirando os americanos de suas bases (nota-se que eles acabam andando um espaço a mais)
                        j=5;
                        for(i=4;i>0;i--){
                        if(Mi[i][5]/10==1)if(Mi[i][6]==0){auxU=Mi[i][5];Mi[i][5]=0;auxH=HP[i][5];HP[i][5]=0;Mi[i][6]=auxU;HP[i][6]=auxH;auxU=auxH=0;}
                                            else if(Mi[1][j+1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[1][j+1]=auxU;HP[1][j+1]=auxH;auxU=auxH=0;}
                                            else if(Mi[2][j+1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[2][j+1]=auxU;HP[2][j+1]=auxH;auxU=auxH=0;}
                                            else if(Mi[3][j+1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[3][j+1]=auxU;HP[3][j+1]=auxH;auxU=auxH=0;}
                                            else if(Mi[4][j+1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[4][j+1]=auxU;HP[4][j+1]=auxH;auxU=auxH=0;}
                    }break;

                    case 3:
                        printf("\nAmericanos não podem avançar além da base soviética!");
                        break;
                }
            }
            if(e==5){
                if(Dollar>=25){
                    Dollar=Dollar-25;
                    printf("\nBombardear qual posição?");
                    scanf("%d",&j);
                    artilharia(j);}
            }
            if(e==6){
                if(Dollar>25){
                    Dollar=Dollar-25;
                    printf("\nBombardear qual posição?");
                    scanf("%d",&j);
                    artilharia(j);}
            }
            if(e==7){
                if(Dollar>25){
                    Dollar=Dollar-25;
                    printf("\nBombardear qual posição?");
                    scanf("%d",&j);
                    artilharia(j);}
            }

         posse();
        }while(e!=0);
    scanf("%d",&turno);
    }while(turno!=0 && HP[0][0]>0 && HP[0][10]>0);
    if(HP[0][0]<=0){printf("\n\n\n Os americanos foram derrotados!");}
    else if(HP[0][10]<=0){printf("\n\n\n Os sovietes foram derrotados!");}
}



void inst(){printf("\n\n\n\n\n MÁ SORTE");}

int main(){
    int e;
    setlocale(LC_ALL, "Portuguese");
    do{
    printf("\n\n\n");
    printf("        ---OPERAÇÃO: DROPSHOT---");
    printf("\n\n\n");
    printf("1-Jogar");
    printf("\n2-Instruções");
    printf("\n0-Sair\n");
    scanf("%d",&e);
    if(e==1){fase1();}
    else if(e==2){inst();}
    }while(e!=0);
    return 0;
}



            /*if(e==2){
                while(Mi[i][10]!=0){i++;}
                if(i<5){Mi[i][10]=21;HP[i][10]=10;Rublo=Rublo-10;}
                else{printf("\nNão há mais espaços sobrando!");}
            }

            if(e==4){
                printf("\nAvançar em qual posição?(Checkpoint A=1, Checkpoint B=2, Checkpoint C=3)");
                scanf("%d",&e);
                switch (e){
                    case 1:
                        printf("\nSovietes não podem avançar além da base americana!");
                        break;

                    case 2: j=10;
                        for(i=4;i>0;i--){
                        if(Mi[i][5]/10==2){if(Mi[i][4]==0){auxU=Mi[i][5];Mi[i][5]=0;auxH=HP[i][5];HP[i][5]=0;Mi[i][4]=auxU;HP[i][4]=auxH;auxU=auxH=0;}
                        else if(Mi[1][j-1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[1][j-1]=auxU;HP[1][j-1]=auxH;auxU=auxH=0;}
                        else if(Mi[2][j-1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[2][j-1]=auxU;HP[2][j-1]=auxH;auxU=auxH=0;}
                        else if(Mi[3][j-1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[3][j-1]=auxU;HP[3][j-1]=auxH;auxU=auxH=0;}
                        else if(Mi[4][j-1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[4][j-1]=auxU;HP[4][j-1]=auxH;auxU=auxH=0;}
                    }}break;

                    case 3: j=10;                       //tirando os russos de suas bases (nota-se que eles andam um espaço a mais, no total)
                        for(i=4;i>0;i--){
                        if(Mi[i][10]/10==2){if(Mi[i][9]==0){auxU=Mi[i][10];Mi[i][10]=0;auxH=HP[i][10];HP[i][10]=0;Mi[i][9]=auxU;HP[i][9]=auxH;auxU=auxH=0;}
                        else if(Mi[1][j-1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[1][j-1]=auxU;HP[1][j-1]=auxH;auxU=auxH=0;}
                        else if(Mi[2][j-1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[2][j-1]=auxU;HP[2][j-1]=auxH;auxU=auxH=0;}
                        else if(Mi[3][j-1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[3][j-1]=auxU;HP[3][j-1]=auxH;auxU=auxH=0;}
                        else if(Mi[4][j-1]==0){auxU=Mi[i][j];Mi[i][j]=0;auxH=HP[i][j];HP[i][j]=0;Mi[4][j-1]=auxU;HP[4][j-1]=auxH;auxU=auxH=0;}
                    }}break;
                }
            }
            if(e==6){while(Mi[i][10]!=0){i++;}
                if(i<5){Mi[i][10]=22;HP[i][10]=10;Rublo=Rublo-10;}
                else{printf("\nNão há mais espaços sobrando!");}}

            if(e==8){while(Mi[i][10]!=0){i++;}
                if(i<5){Mi[i][10]=23;HP[i][10]=10;Rublo=Rublo-10;}
                else{printf("\nNão há mais espaços sobrando!");}}
            */
