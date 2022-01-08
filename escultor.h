#ifndef ESCULTOR_H
#define ESCULTOR_H

/**
 * @brief The Voxel struct
 * A estrutura Voxel e responsavel por gerar a matriz 3D de acordo com seus parametros
 * @param r: refere-se a cor vermelha existente no sistema RGB, sua variacao de tom e feita entre 0 e 255.
 * @param g: refere-se a cor verde existente no sistema RGB, sua variacao de tom e feita entre 0 e 255.
 * @param b: refere-se a cor azul existente no sistema RGB, sua variacao de tom e feita entre 0 e 255.
 * @param a: refere-se a transparencia (opacidade) de uma figura, a variacao de transparencia e feita entre 0 e 1.
 * @param isOn: habilita ou desabilita o Voxel, e um parametro booleano, sendo utilizado apenas como True ou False.

 */

struct Voxel{

    float r, g, b;  // cores
    float a;        // transparencia
    bool isOn;      // inclusao

};
/**
 * @brief The Escultor class
 *  Classe responsavel por gerar o Escultor da figura 3D, dentro dessa
 *  classe encontram-se todos que possibilitam o desenho da figura requerida pelo usuario
 *  sendo assim, ela se relaciona com a estrutura Voxel.
 */

class Escultor{

protected:
    /** Construtor da classe Escultor, declara-se com parametros privados
     */

    Voxel ***v; // Matriz 3d

    int nx,ny,nz; // Dimensoes da matriz 3d
    float r,g,b,a; // Current drawing color

public:
    /** Metodos publicos da classe Escultor, sao onde se localiza os codigos desenvolvidos
     *  para a criacao da figura 3D. Os todos sao compostos pela construcao de figuras geometricas
     *  conhecidas (retangulos, esferas e elipses) e podem ser manipuladas pelo programador para construir
     *  sua figura.
     */
    Escultor(int _nx, int _ny, int _nz);


    ~Escultor(); // Destrututor da classe Escultor
    /**
     * @brief setColor: Funcao responsavel por dar cor no padrao RGB e s pecas criadas
     * @param r: parametro referente a cor vermelha do sistema RGB.
     * @param g: parametro referente a cor verde do sistema RGB.
     * @param b: parametro referente a cor azul do sistema RGB. O valor de variacao do tom das cores sao de 0 a 255.
     * @param alpha: parametro que se refere a transparencia (opacidade) do objeto. O valor de variacao da transparencia sao de 0 a 1.
     */
    void setColor(float r, float g, float b, float alpha);
    /**
     * @brief putVoxel: Habilita o Voxel para operar na coloracao dos blocos desenhados.
     * @param x: coordenada em relacao ao eixo x.
     * @param y: coordenada em relacao ao eixo y.
     * @param z: coordenada em relacao ao eixo z.
     */
    void putVoxel(int x, int y, int z);
    /**
     * @brief cutVoxel: Desabilita o Voxel que estava operando na coloracao dos blocos.
     * @param x: coordenada em relacao ao eixo x.
     * @param y: coordenada em relacao ao eixo y.
     * @param z: coordenada em relacao ao eixo z.
     */
    void cutVoxel(int x, int y, int z);
    /**
     * @brief putBox: Ativa o Voxel em um determinado intervalo, seja ele em x, y ou z, os blocos criados recebem a cor estabelecida.
     * @param x0: parametro referente ao inicio da construcao do retangulo em relacao ao eixo x.
     * @param x1: parametro referente ao final da construcao do retangulo em relacao ao eixo x.
     * @param y0: parametro referente ao inicio da construcao do retangulo em relacao ao eixo y.
     * @param y1: parametro referente ao final da construcao do retangulo em relacao ao eixo y.
     * @param z0: parametro referente ao inicio da construcao do retangulo em relacao ao eixo z.
     * @param z1: parametro referente ao final da construcao do retangulo em relacao ao eixo z.
     */
    void putBox(int x0, int x1, int y0, int y1, int z0, int z1);
    /**
     * @brief cutBox: Desativa o Voxel em um determinado intervalo, seja ele em x, y, ou z, destruindo os blocos no intervalo determinado.
     * @param x0: parametro referente ao inicio da construcao do retangulo em relacao ao eixo x.
     * @param x1: parametro referente ao final da construcao do retangulo em relacao ao eixo x.
     * @param y0: parametro referente ao inicio da construcao do retangulo em relacao ao eixo y.
     * @param y1: parametro referente ao final da construcao do retangulo em relacao ao eixo y.
     * @param z0: parametro referente ao inicio da construcao do retangulo em relacao ao eixo z.
     * @param z1: parametro referente ao final da construcao do retangulo em relacao ao eixo z.
     */
    void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);
    /**
     * @brief putSphere: metodo responsavel por gerar a figura de uma esfera no plano de desenho.
     * @param xcenter: parametro que se refere ao x do centro da esfera.
     * @param ycenter: parametro que se refere ao x do centro da esfera.
     * @param zcenter: parametro que se refere ao x do centro da esfera.
     * @param radius: parametro que se refere ao tamanho do raio da esfera.
     */
    void putSphere(int xcenter, int ycenter, int zcenter, int radius);
    /**
     * @brief cutSphere metodo responsavel por cortar uma determinada area de uma figura de uma esfera no plano do desenho.
     * @param xcenter: parametro referente a coordenada do x do centro.
     * @param ycenter: parametro referente a coordenada do y do centro.
     * @param zcenter: parametro referente a coordenada do z do centro.
     * @param radius: parametro referente ao tamanho do raio da esfera.
     */
    void cutSphere(int xcenter, int ycenter, int zcenter, int radius);
    /**
     * @brief putEllipsoid: metodo responsavel por gerar a figura de uma elipse no plano do desenho.
     * @param xcenter: parametro referente a coordenada do x do centro.
     * @param ycenter: parametro referente a coordenada do y do centro.
     * @param zcenter: parametro referente a coordenada do z do centro.
     * @param rx: parametro referente a coordenada do eixo x.
     * @param ry: parametro referente a coordenada do eixo y.
     * @param rz: parametro referente a coordenada do eixo z.
     */
    void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    /**
     * @brief cutEllipsoid: metodo responsavel por cortar a area de uma figura de um elipse no plano do desenho.
     * @param xcenter: parametro referente a coordenada do x do centro.
     * @param ycenter: parametro referente a coordenada do y do centro.
     * @param zcenter: parametro referente a coordenada do z do centro.
     * @param rx: parametro referente a coordenada do eixo x.
     * @param ry: parametro referente a coordenada do eixo y.
     * @param rz: parametro referente a coordenada do eixo z.
     */
    void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    /**
     * @brief writeOFF: metodo responsavel pela gravacao do arquivo OFF no final de sua execucao.
     * @param filename: armazena o nome do arquivo .OFF.
     */
    void writeOFF(char* filename);

};

#endif // ESCULTOR_H
