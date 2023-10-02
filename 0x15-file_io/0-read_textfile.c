#include "main.h"
#include <stdio.h>

/**
 * read_textfile - a function that reads a text file
 * and prints it to STDOUT.
 * @filename: text file being read
   @letters: number of letters to be read
 * main: returns actual number of letters it could read and print
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t lenr, lenw;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	lenr = read(fd, buffer, letters);
	close(fd);
	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);
	if (lenr != lenw)
		return (0);
	return (lenw);
}#include "main.h"
#include <stdio.h>

/**
 *  * read_textfile - a function that reads a text file
 *   * and prints it to STDOUT.
 *    * @filename: text file being read
 *       @letters: number of letters to be read
 *        * main: returns actual number of letters it could read and print
 *         * Return: w- actual number of bytes read and printed
 *          * 0 when function fails or filename is NULL.
 *           */

ssize_t read_textfile(const char *filename, size_t letters)
{
		int fd;
			ssize_t lenr, lenw;
				char *buffer;

					if (filename == NULL)
								return (0);
						fd = open(filename, O_RDONLY);
							if (fd == -1)
										return (0);
								buffer = malloc(sizeof(char) * letters);
									if (buffer == NULL)
									{
												close(fd);
														return (0);
									}
										lenr = read(fd, buffer, letters);
											close(fd);
												if (lenr == -1)
												{
															free(buffer);
																	return (0);
												}
													lenw = write(STDOUT_FILENO, buffer, lenr);
														free(buffer);
															if (lenr != lenw)
																		return (0);
																return (lenw);
}#include "main.h"
#include <stdio.h>

/**
 *  * read_textfile - a function that reads a text file
 *   * and prints it to STDOUT.
 *    * @filename: text file being read
 *       @letters: number of letters to be read
 *        * main: returns actual number of letters it could read and print
 *         * Return: w- actual number of bytes read and printed
 *          * 0 when function fails or filename is NULL.
 *           */

ssize_t read_textfile(const char *filename, size_t letters)
{
		int fd;
			ssize_t lenr, lenw;
				char *buffer;

					if (filename == NULL)
								return (0);
						fd = open(filename, O_RDONLY);
							if (fd == -1)
										return (0);
								buffer = malloc(sizeof(char) * letters);
									if (buffer == NULL)
									{
												close(fd);
														return (0);
									}
										lenr = read(fd, buffer, letters);
											close(fd);
												if (lenr == -1)
												{
															free(buffer);
																	return (0);
												}
													lenw = write(STDOUT_FILENO, buffer, lenr);
														free(buffer);
															if (lenr != lenw)
																		return (0);
																return (lenw);
}#include "main.h"
#include <stdio.h>

/**
 *  * read_textfile - a function that reads a text file
 *   * and prints it to STDOUT.
 *    * @filename: text file being read
 *       @letters: number of letters to be read
 *        * main: returns actual number of letters it could read and print
 *         * Return: w- actual number of bytes read and printed
 *          * 0 when function fails or filename is NULL.
 *           */

ssize_t read_textfile(const char *filename, size_t letters)
{
		int fd;
			ssize_t lenr, lenw;
				char *buffer;

					if (filename == NULL)
								return (0);
						fd = open(filename, O_RDONLY);
							if (fd == -1)
										return (0);
								buffer = malloc(sizeof(char) * letters);
									if (buffer == NULL)
									{
												close(fd);
														return (0);
									}
										lenr = read(fd, buffer, letters);
											close(fd);
												if (lenr == -1)
												{
															free(buffer);
																	return (0);
												}
													lenw = write(STDOUT_FILENO, buffer, lenr);
														free(buffer);
															if (lenr != lenw)
																		return (0);
																return (lenw);
}#include "main.h"
#include <stdio.h>

/**
 *  * read_textfile - a function that reads a text file
 *   * and prints it to STDOUT.
 *    * @filename: text file being read
 *       @letters: number of letters to be read
 *        * main: returns actual number of letters it could read and print
 *         * Return: w- actual number of bytes read and printed
 *          * 0 when function fails or filename is NULL.
 *           */

ssize_t read_textfile(const char *filename, size_t letters)
{
		int fd;
			ssize_t lenr, lenw;
				char *buffer;

					if (filename == NULL)
								return (0);
						fd = open(filename, O_RDONLY);
							if (fd == -1)
										return (0);
								buffer = malloc(sizeof(char) * letters);
									if (buffer == NULL)
									{
												close(fd);
														return (0);
									}
										lenr = read(fd, buffer, letters);
											close(fd);
												if (lenr == -1)
												{
															free(buffer);
																	return (0);
												}
													lenw = write(STDOUT_FILENO, buffer, lenr);
														free(buffer);
															if (lenr != lenw)
																		return (0);
																return (lenw);
}#include "main.h"
#include <stdio.h>

/**
 *  * read_textfile - a function that reads a text file
 *   * and prints it to STDOUT.
 *    * @filename: text file being read
 *       @letters: number of letters to be read
 *        * main: returns actual number of letters it could read and print
 *         * Return: w- actual number of bytes read and printed
 *          * 0 when function fails or filename is NULL.
 *           */

ssize_t read_textfile(const char *filename, size_t letters)
{
		int fd;
			ssize_t lenr, lenw;
				char *buffer;

					if (filename == NULL)
								return (0);
						fd = open(filename, O_RDONLY);
							if (fd == -1)
										return (0);
								buffer = malloc(sizeof(char) * letters);
									if (buffer == NULL)
									{
												close(fd);
														return (0);
									}
										lenr = read(fd, buffer, letters);
											close(fd);
												if (lenr == -1)
												{
															free(buffer);
																	return (0);
												}
													lenw = write(STDOUT_FILENO, buffer, lenr);
														free(buffer);
															if (lenr != lenw)
																		return (0);
																return (lenw);
}#include "main.h"
#include <stdio.h>

/**
 *  * read_textfile - a function that reads a text file
 *   * and prints it to STDOUT.
 *    * @filename: text file being read
 *       @letters: number of letters to be read
 *        * main: returns actual number of letters it could read and print
 *         * Return: w- actual number of bytes read and printed
 *          * 0 when function fails or filename is NULL.
 *           */

ssize_t read_textfile(const char *filename, size_t letters)
{
		int fd;
			ssize_t lenr, lenw;
				char *buffer;

					if (filename == NULL)
								return (0);
						fd = open(filename, O_RDONLY);
							if (fd == -1)
										return (0);
								buffer = malloc(sizeof(char) * letters);
									if (buffer == NULL)
									{
												close(fd);
														return (0);
									}
										lenr = read(fd, buffer, letters);
											close(fd);
												if (lenr == -1)
												{
															free(buffer);
																	return (0);
												}
													lenw = write(STDOUT_FILENO, buffer, lenr);
														free(buffer);
															if (lenr != lenw)
																		return (0);
																return (lenw);
}#include "main.h"
#include <stdio.h>

/**
 *  * read_textfile - a function that reads a text file
 *   * and prints it to STDOUT.
 *    * @filename: text file being read
 *       @letters: number of letters to be read
 *        * main: returns actual number of letters it could read and print
 *         * Return: w- actual number of bytes read and printed
 *          * 0 when function fails or filename is NULL.
 *           */

ssize_t read_textfile(const char *filename, size_t letters)
{
		int fd;
			ssize_t lenr, lenw;
				char *buffer;

					if (filename == NULL)
								return (0);
						fd = open(filename, O_RDONLY);
							if (fd == -1)
										return (0);
								buffer = malloc(sizeof(char) * letters);
									if (buffer == NULL)
									{
												close(fd);
														return (0);
									}
										lenr = read(fd, buffer, letters);
											close(fd);
												if (lenr == -1)
												{
															free(buffer);
																	return (0);
												}
													lenw = write(STDOUT_FILENO, buffer, lenr);
														free(buffer);
															if (lenr != lenw)
																		return (0);
																return (lenw);
}#include "main.h"
#include <stdio.h>

/**
 *  * read_textfile - a function that reads a text file
 *   * and prints it to STDOUT.
 *    * @filename: text file being read
 *       @letters: number of letters to be read
 *        * main: returns actual number of letters it could read and print
 *         * Return: w- actual number of bytes read and printed
 *          * 0 when function fails or filename is NULL.
 *           */

ssize_t read_textfile(const char *filename, size_t letters)
{
		int fd;
			ssize_t lenr, lenw;
				char *buffer;

					if (filename == NULL)
								return (0);
						fd = open(filename, O_RDONLY);
							if (fd == -1)
										return (0);
								buffer = malloc(sizeof(char) * letters);
									if (buffer == NULL)
									{
												close(fd);
														return (0);
									}
										lenr = read(fd, buffer, letters);
											close(fd);
												if (lenr == -1)
												{
															free(buffer);
																	return (0);
												}
													lenw = write(STDOUT_FILENO, buffer, lenr);
														free(buffer);
															if (lenr != lenw)
																		return (0);
																return (lenw);
}
