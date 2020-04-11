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
int mostrarMenu(int,int,int,int,int);

/** \brief Muestra el submen� de la  opci�n 3
 *
 * \param primer operando
 * \param segundo operando
 * \param flag de la opci�n 3
 *
 */
void mostrarSubmenu(int,int,int);//funci�n auxiliar a mostrarMenu

/** \brief muestra los resultados de las operaciones
 *
 * \param primer operando
 * \param segundo operando
 *
 */
void mostrarResultados(int,int);

/** \brief Muestra un mensaje
 *
 * \param Mensaje a mostrar
 *
 */
void mostrarMensaje(char[]);



