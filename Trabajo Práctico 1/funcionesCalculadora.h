#ifndef FUNCIONESCALCULADORA_H_INCLUDED
#define FUNCIONESCALCULADORA_H_INCLUDED


#endif // FUNCIONESCALCULADORA_H_INCLUDED

/** \brief Muestra el men� de opciones
 *
 * \param primer operando
 * \param segundo operando
 * \param flag del primer operando
 * \param flag del segundo operando
 * \param flag de la tercera opci�n
 * \return devuleve la opci�n elegida
 *
 */
int mostrarMenu(int num1,int num2,int flag1,int flag2,int flag3);

/** \brief Muestra el submen� de la  opci�n 3
 *
 * \param primer operando
 * \param segundo operando
 * \param flag de la opci�n 3
 *
 */
void mostrarSubmenu(int num1,int num2,int flag);//funci�n auxiliar a mostrarMenu

/** \brief muestra los resultados de las operaciones
 *
 * \param primer operando
 * \param segundo operando
 *
 */
void mostrarResultados(int num1,int num2);

/** \brief Muestra un mensaje y devuelve un n�mero entero
 *
 * \param mensaje a mostrar
 *
 * \return el n�mero ingresado
 */

 int getInt(char mensaje[]);

 /** \brief Muestra un mensaje y pausa la pantalla
 *
 * \param mensaje a mostrar
 *
 */

void mostrarMensaje(char mensaje[]);



