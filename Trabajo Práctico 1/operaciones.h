#ifndef OPERACIONES_H_INCLUDED
#define OPERACIONES_H_INCLUDED

/** \brief Suma dos enteros y devuelve el resultado
 *
 * \param primer operando
 * \param segundo operando
 * \return el resultado de la suma
 *
 */
int sumar(int a,int b);

/** \brief Resta dos enteros y devuelve el resultado
 *
 * \param primer operando
 * \param segundo operando
 * \return el resultado de las resta
 *
 */
int restar(int a,int b);

/** \brief Multiplica dos enteros y devuelve el resultado
 *
 * \param primer operando
 * \param segundo operando
 * \return el resultado de la multipliaci�n
 *
 */
int multiplicar(int a,int b);

/** \brief Divide dos enteros y devuelve el resultado
 *
 * \param primer operando
 * \param segundo operando
 * \return el resultado de la divisi�n
 *
 */
float dividir(int a,int b);

/** \brief Calcula el factorial de un n�mero y lo devuelve
 *
 * \param entero del que se calcular� el factorial
 * \return resultado del c�lculo del factorial
 *
 */
long long calcularFactorial(int numero);


#endif // OPERACIONES_H_INCLUDED
