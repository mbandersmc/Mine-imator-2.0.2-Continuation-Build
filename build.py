import sys
import os
from os import path
import subprocess

print("Checkout submodules")
subprocess.check_call(['git','submodule','update','--init','--recursive'])

print("Get binary dependencies")
if sys.platform.startswith('linux'):
    #Assumes apt-get
    subprocess.check_call(['sudo','apt-get','update'])
    subprocess.check_call(['sudo','apt-get','install','build-essential',
    'git','gcc-multilib','cmake','g++-multilib','mesa-utils','mesa-common-dev',
    'libbz2-dev','libomp-12-dev','libomp-12-dev','lldb', '-y'])

print("Get precompiled libraries")
# TODO need this to finish
lib = False
if not lib:
  print("Warning, no precompiled libraries")

BUILD_DIR = path.join('..','build_release')
SOURCE_DIR = path.join('.','CppProject')
print(SOURCE_DIR)

print("Make sure the build directory exists")
if path.exists(BUILD_DIR) == False:
    os.mkdir(BUILD_DIR)

print("Configure Mine-imator project")
if lib:
  if sys.platform == 'win32':
     #Specify 64 bits architecture on Windows
     subprocess.check_call(['cmake','-A','x64','-S',SOURCE_DIR,'-B',BUILD_DIR])
  else:
     subprocess.check_call(['cmake','-S',SOURCE_DIR,'-B',BUILD_DIR])
else:
  print("Skip configure, no precompiled libraries")

print("Build Mine-imator project")
if lib:
  subprocess.check_call(['cmake','--build',BUILD_DIR,'--target','install','--config','Release'])
else:
  print("Skip building, no precompiled libraries")
