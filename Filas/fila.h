struct STRUCT_FILA
 {
   int  front ;
   int  rear ;
   int  capacidade ;
   int * entrada ;
};
// e ainda
typedef  struct STRUCT_FILA  fila ;

// OS PROTOTIPOS FUNCOES e USO
fila * cria_fila (  int CAPACIDADE );
bool  fila_cheia  ( fila * F);
bool  fila_vazia  ( fila * F);
int   tamanho_fila ( fila * F );
void  chegada (int x, fila * F); // entra ... char
char  partida ( fila * F );        // .. sai char
void  destroi_fila( fila *F);
void  mostra_fila( fila *F );
