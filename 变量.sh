#! /bin/bash

name = "\"hello world\""
name = '����hello world\����

array[0] = 1
array[1] = good
array[2] = world
array[1000] = hello

echo ${array[*]} #���ȫ��Ԫ��
echo ${#array[*]} #�������
