/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:50:16 by mazeghou          #+#    #+#             */
/*   Updated: 2025/02/18 16:06:21 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		cout << "You need to pass 3 arguments (fileName, s1, s2)." << endl;
		return (0);
	}
	string fileName = argv[1];
	string s1 = argv[2];
	string s2 = argv[3];
	string content, line;
	ifstream infile(fileName.c_str());
	if (!infile)
	{
		cerr << "Error: file not found." << endl;
		return (0);
	}
	while (getline(infile, line))
	{
		content += line + "\n";
	}
	infile.close();
	int j = 0;
	string temp_content = content;
	for (long unsigned int i = 0; i < temp_content.length(); i++)
	{
		if (!s1[j] || !temp_content[i])
			break;
		if (temp_content.substr(i, s1.length()) == s1)
		{
			temp_content = temp_content.erase(i, s1.length());
			for (long unsigned int k = 0; k < s2.length(); k++)
				temp_content.insert(i + k, 1, s2[k]);
		}
	}
	fileName.append(".replace");
	ofstream file(fileName.c_str());
	if (!file)
	{
		cerr << "Error opening file for writing\n";
		return 1;
	}
	file << temp_content;
	file.close();
}
