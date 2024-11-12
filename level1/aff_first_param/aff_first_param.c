/* Write a program that takes strings as arguments, and displays its first
argument followed by a \n.

If the number of arguments is less than 1, the program displays \n.

Example:

$> ./aff_first_param vincent mit "l'ane" dans un pre et "s'en" vint | cat -e
vincent$
$> ./aff_first_param "j'aime le fromage de chevre" | cat -e
j'aime le fromage de chevre$
$> ./aff_first_param
$
*/

// The name of the variable argc stands for "argument count"; argc contains the number of arguments passed to the program.
// Including the name of the program.
// The name of the variable argv stands for "argument vector". 
// A vector is a one-dimensional array, and argv is a one-dimensional array of strings.

#include <unistd.h>

// int main(int argc, char **argv)
// {
// 	if (argc < 1)
// 		write(1, "\n", 1);
// 	// else if(argc = 1)
// 	// 	return argc;
// 	else
// 	{
// 		while(argv[1])
// 		{
// 			write(1, argv[1]++, 1);  // 打印当前字符，并将指针向后移动一个字符
//         }
//         write(1, "\n", 1);  // 在参数全部打印完毕后输出一个换行符
//     }
//     return (0); 
// }

int main(int argc, char **argv)
{
    // 检查是否传入至少一个命令行参数（除了程序名）
    if (argc <= 1)
      write(1, "\n", 1);  // 如果没有额外的命令行参数，只输出一个换行符

    if (argc > 1)
    {
      int i = 0;
      while (argv[1][i])  // 遍历第一个命令行参数的每个字符
      { 
        write(1, &argv[1][i], 1);
        i++;  // 打印当前字符，并将指针向后移动一个字符
      }
      write(1, "\n", 1);  // 在参数全部打印完毕后输出一个换行符
    }
    return (0);  // 程序正常结束
}
