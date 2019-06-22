#include "SDL/SDL.h"
#include "SDL/SDL_image.h"

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;
const int SCREEN_BPP = 32;

SDL_Surface *background = NULL;
SDL_Surface *hello = NULL;
SDL_Surface *imagem = NULL;
SDL_Surface *kratos = NULL;
SDL_Surface *tela = NULL;

SDL_Event evento;

SDL_Surface *carregar_imagem( char nomearquivo[] ){

    //Declaração de superfícies
    SDL_Surface *imagem_carregada = NULL;
    SDL_Surface *imagem_otimizada = NULL;

    //Carrega imagem e a coloca numa superfície
    imagem_carregada = IMG_Load( nomearquivo );

    //Otimiza a imagem numa nova superfície e deleta a superfície antiga
    if (imagem_carregada != NULL){

        imagem_otimizada = SDL_DisplayFormat( imagem_carregada );
        SDL_FreeSurface( imagem_carregada );

    }

    return imagem_otimizada;
}

void aplicar_superficie (int x, int y, SDL_Surface *aplicar, SDL_Surface *local){


    //Cria um retangulo para aplicar as superfícies
    SDL_Rect objeto;

    //Coordenadas objeto
    objeto.x = x;
    objeto.y = y;

    //Aplica a superfície
    SDL_BlitSurface( aplicar, NULL, local, &objeto);
}

int iniciar() {
    //Inicializa SDL por completo
    if( SDL_Init( SDL_INIT_EVERYTHING ) == -1 )
    {
        return -1;
    }

    tela = SDL_SetVideoMode( SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_BPP, SDL_SWSURFACE );

    if( tela == NULL )
    {
        return -1;
    }

    SDL_WM_SetCaption( "Teste programa 2", NULL );

    return 1;
}

int carregar_arquivos(){

    background = carregar_imagem( "background.bmp" );
    if (background == NULL){
        return -1;
    }
    hello = carregar_imagem( "hello.bmp" );
    if (hello == NULL){
        return -1;
    }
    imagem = carregar_imagem( "imagem.bmp" );
    if (imagem == NULL){
        return -1;
    }
    kratos = carregar_imagem( "kratos.bmp" );
    if (background == NULL){
        return -1;
    }

}

int trocar_imagem(int i, int x, int y, SDL_Surface *destino){
    if (i == 0){
        aplicar_superficie(x, y, imagem, destino );
    }
    if (i == 1){
        aplicar_superficie(x, y, kratos, destino );
    }
    return 1;
}

void limpar() {
    SDL_FreeSurface(background);
    SDL_FreeSurface(hello);
    SDL_FreeSurface(imagem);
    SDL_FreeSurface(kratos);
    SDL_FreeSurface(tela);

    SDL_Quit();
}

int main( int argc, char* args[] ) {
    int i = 0, quit = 0;
    int anterior = -1;
    float t0 = 0, t1 = 0, t2 = 0;

    if (iniciar() == -1)
    {
        return -1;
    }

    if (carregar_arquivos() == -1)
    {
        return -1;
    }

    t0 = SDL_GetTicks();
    t1 = t0;
    while (quit == 0)
    {
        t2 = SDL_GetTicks () - t0;
        if ( t2 - t1 > 2000)
        {
            if(i != anterior )
            {
                if( trocar_imagem(i, 0, 0, tela) == -1)
                {
                    return -1;
                }
                if( SDL_Flip( tela ) == -1 )
                {
                    return -1;
                }
            }
            anterior = i;
            if (i == 1)
            {
                i = 0;
            }
            else
            {
                i++;
            }
            t1 = SDL_GetTicks() - t0;
        }
        while( SDL_PollEvent( &evento ) )
        {
            if( evento.type == SDL_QUIT )
            {
                quit = 1;
            }
        }
    }

    limpar();

    return 0;
}
