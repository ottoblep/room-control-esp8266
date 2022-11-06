# This example code is in the Public Domain (or CC0 licensed, at your option.)

# Unless required by applicable law or agreed to in writing, this
# software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
# CONDITIONS OF ANY KIND, either express or implied.

# -*- coding: utf-8 -*-

from builtins import input
import socket
import sys  

# -----------  Config  ---------- 
PORT = 3333
IP_VERSION = 'IPv4'
IPV4 = '192.168.9.116'
IPV6 = 'FE80::32AE:A4FF:FE80:5288'
# -------------------------------

if IP_VERSION == 'IPv4':
    host = IPV4 
    family_addr = socket.AF_INET
elif IP_VERSION == 'IPv6':
    host = IPV6
    family_addr = socket.AF_INET6
else:
    print('IP_VERSION must be IPv4 or IPv6')
    sys.exit(1)


try:
    sock = socket.socket(family_addr, socket.SOCK_DGRAM) 
except socket.error as msg:
    print('Failed to create socket')
    sys.exit()
 
msg = "sw" 
sock.sendto(msg.encode(), (host, PORT))
