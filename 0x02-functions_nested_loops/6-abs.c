#include "main.h"
/**
 * _abs - this computes the abs val of an integer
 * @r : The No. to be computed
 * Return : Abs Value of No or Zero
 *
 */
int _abs(int r)
{
if (r < 0)
{
int abs_val;
abs_val = r * -1;
return (abs_val);
}
return (r);
}
