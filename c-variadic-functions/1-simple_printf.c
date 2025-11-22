#include <stdarg.h>
#include <unistd.h>

void print_char(char c)
{
	    write(1, &c, 1);
}

void print_string(const char *s)
{
	    int i = 0;
	        if (!s)
			        s = "(null)";
		    while (s[i])
			        {
					        write(1, &s[i], 1);
						        i++;
							    }
}

void print_int(int n)
{
	    char buffer[20];
	        int i = 0;
		    int neg = 0;

		        if (n == 0)
				    {
					            print_char('0');
						            return;
							        }
			    if (n < 0)
				        {
						        neg = 1;
							        n = -n;
								    }
			        while (n > 0)
					    {
						            buffer[i++] = (n % 10) + '0';
							            n = n / 10;
								        }
				    if (neg)
					            buffer[i++] = '-';

				        while (i--)
						        print_char(buffer[i]);
}

void _printf(const char *format, ...)
{
	    va_list args;
	        int i = 0;

		    va_start(args, format);

		        while (format && format[i])
				    {
					            if (format[i] == '%' && format[i + 1])
							            {
									                i++;
											            if (format[i] == 'c')
													                    print_char(va_arg(args, int));
												                else if (format[i] == 's')
															                print_string(va_arg(args, char *));
														            else if (format[i] == 'i')
																                    print_int(va_arg(args, int));
															                else
																		            {
																				                    print_char('%');
																						                    print_char(format[i]);
																								                }
																	        }
						            else
								            {
										                print_char(format[i]);
												        }
							            i++;
								        }

			    va_end(args);
}

