{
  "nbformat": 4,
  "nbformat_minor": 0,
  "metadata": {
    "colab": {
      "provenance": [],
      "authorship_tag": "ABX9TyPO1dAtbN3eLkSMQJRLMh/K",
      "include_colab_link": true
    },
    "kernelspec": {
      "name": "python3",
      "display_name": "Python 3"
    },
    "language_info": {
      "name": "python"
    }
  },
  "cells": [
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "view-in-github",
        "colab_type": "text"
      },
      "source": [
        "<a href=\"https://colab.research.google.com/github/techie99/InternshipResources/blob/main/nbody.c\" target=\"_parent\"><img src=\"https://colab.research.google.com/assets/colab-badge.svg\" alt=\"Open In Colab\"/></a>"
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "!gcc -o nbody nbody.c -lm"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "W6M7WQ_omr71",
        "outputId": "21ad66c1-ad74-48f8-ce74-c78c44a23083"
      },
      "execution_count": 11,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "\u001b[01m\u001b[Knbody.c:\u001b[m\u001b[K In function ‘\u001b[01m\u001b[KbodyForce\u001b[m\u001b[K’:\n",
            "\u001b[01m\u001b[Knbody.c:30:23:\u001b[m\u001b[K \u001b[01;35m\u001b[Kwarning: \u001b[m\u001b[Kimplicit declaration of function ‘\u001b[01m\u001b[Krsqrtf\u001b[m\u001b[K’; did you mean ‘\u001b[01m\u001b[Ksqrtf\u001b[m\u001b[K’? [\u001b[01;35m\u001b[K\u001b]8;;https://gcc.gnu.org/onlinedocs/gcc/Warning-Options.html#index-Wimplicit-function-declaration\u0007-Wimplicit-function-declaration\u001b]8;;\u0007\u001b[m\u001b[K]\n",
            "   30 |       float invDist = \u001b[01;35m\u001b[Krsqrtf\u001b[m\u001b[K(distSqr);\n",
            "      |                       \u001b[01;35m\u001b[K^~~~~~\u001b[m\u001b[K\n",
            "      |                       \u001b[32m\u001b[Ksqrtf\u001b[m\u001b[K\n",
            "/usr/bin/ld: /tmp/cc2UAjCh.o: in function `bodyForce':\n",
            "nbody.c:(.text+0x180): undefined reference to `rsqrtf'\n",
            "/usr/bin/ld: /tmp/cc2UAjCh.o: in function `main':\n",
            "nbody.c:(.text+0x3f8): undefined reference to `read_values_from_file'\n",
            "/usr/bin/ld: nbody.c:(.text+0x417): undefined reference to `StartTimer'\n",
            "/usr/bin/ld: nbody.c:(.text+0x5a0): undefined reference to `GetTimer'\n",
            "/usr/bin/ld: nbody.c:(.text+0x637): undefined reference to `write_values_to_file'\n",
            "collect2: error: ld returned 1 exit status\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "import subprocess\n",
        "\n",
        "result = subprocess.run([\"./nbody\"], capture_output=True, text=True)  # Add ./ to specify the current directory\n",
        "print(result.stdout)\n",
        "print(result.stderr)  # For potential errors"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/",
          "height": 391
        },
        "id": "BbSlhfJqmtv7",
        "outputId": "cc591219-a0d3-4155-bd74-eb1aff872522"
      },
      "execution_count": 14,
      "outputs": [
        {
          "output_type": "error",
          "ename": "FileNotFoundError",
          "evalue": "[Errno 2] No such file or directory: './nbody'",
          "traceback": [
            "\u001b[0;31m---------------------------------------------------------------------------\u001b[0m",
            "\u001b[0;31mFileNotFoundError\u001b[0m                         Traceback (most recent call last)",
            "\u001b[0;32m<ipython-input-14-7d1646a98d1a>\u001b[0m in \u001b[0;36m<cell line: 0>\u001b[0;34m()\u001b[0m\n\u001b[1;32m      1\u001b[0m \u001b[0;32mimport\u001b[0m \u001b[0msubprocess\u001b[0m\u001b[0;34m\u001b[0m\u001b[0;34m\u001b[0m\u001b[0m\n\u001b[1;32m      2\u001b[0m \u001b[0;34m\u001b[0m\u001b[0m\n\u001b[0;32m----> 3\u001b[0;31m \u001b[0mresult\u001b[0m \u001b[0;34m=\u001b[0m \u001b[0msubprocess\u001b[0m\u001b[0;34m.\u001b[0m\u001b[0mrun\u001b[0m\u001b[0;34m(\u001b[0m\u001b[0;34m[\u001b[0m\u001b[0;34m\"./nbody\"\u001b[0m\u001b[0;34m]\u001b[0m\u001b[0;34m,\u001b[0m \u001b[0mcapture_output\u001b[0m\u001b[0;34m=\u001b[0m\u001b[0;32mTrue\u001b[0m\u001b[0;34m,\u001b[0m \u001b[0mtext\u001b[0m\u001b[0;34m=\u001b[0m\u001b[0;32mTrue\u001b[0m\u001b[0;34m)\u001b[0m  \u001b[0;31m# Add ./ to specify the current directory\u001b[0m\u001b[0;34m\u001b[0m\u001b[0;34m\u001b[0m\u001b[0m\n\u001b[0m\u001b[1;32m      4\u001b[0m \u001b[0mprint\u001b[0m\u001b[0;34m(\u001b[0m\u001b[0mresult\u001b[0m\u001b[0;34m.\u001b[0m\u001b[0mstdout\u001b[0m\u001b[0;34m)\u001b[0m\u001b[0;34m\u001b[0m\u001b[0;34m\u001b[0m\u001b[0m\n\u001b[1;32m      5\u001b[0m \u001b[0mprint\u001b[0m\u001b[0;34m(\u001b[0m\u001b[0mresult\u001b[0m\u001b[0;34m.\u001b[0m\u001b[0mstderr\u001b[0m\u001b[0;34m)\u001b[0m  \u001b[0;31m# For potential errors\u001b[0m\u001b[0;34m\u001b[0m\u001b[0;34m\u001b[0m\u001b[0m\n",
            "\u001b[0;32m/usr/lib/python3.11/subprocess.py\u001b[0m in \u001b[0;36mrun\u001b[0;34m(input, capture_output, timeout, check, *popenargs, **kwargs)\u001b[0m\n\u001b[1;32m    546\u001b[0m         \u001b[0mkwargs\u001b[0m\u001b[0;34m[\u001b[0m\u001b[0;34m'stderr'\u001b[0m\u001b[0;34m]\u001b[0m \u001b[0;34m=\u001b[0m \u001b[0mPIPE\u001b[0m\u001b[0;34m\u001b[0m\u001b[0;34m\u001b[0m\u001b[0m\n\u001b[1;32m    547\u001b[0m \u001b[0;34m\u001b[0m\u001b[0m\n\u001b[0;32m--> 548\u001b[0;31m     \u001b[0;32mwith\u001b[0m \u001b[0mPopen\u001b[0m\u001b[0;34m(\u001b[0m\u001b[0;34m*\u001b[0m\u001b[0mpopenargs\u001b[0m\u001b[0;34m,\u001b[0m \u001b[0;34m**\u001b[0m\u001b[0mkwargs\u001b[0m\u001b[0;34m)\u001b[0m \u001b[0;32mas\u001b[0m \u001b[0mprocess\u001b[0m\u001b[0;34m:\u001b[0m\u001b[0;34m\u001b[0m\u001b[0;34m\u001b[0m\u001b[0m\n\u001b[0m\u001b[1;32m    549\u001b[0m         \u001b[0;32mtry\u001b[0m\u001b[0;34m:\u001b[0m\u001b[0;34m\u001b[0m\u001b[0;34m\u001b[0m\u001b[0m\n\u001b[1;32m    550\u001b[0m             \u001b[0mstdout\u001b[0m\u001b[0;34m,\u001b[0m \u001b[0mstderr\u001b[0m \u001b[0;34m=\u001b[0m \u001b[0mprocess\u001b[0m\u001b[0;34m.\u001b[0m\u001b[0mcommunicate\u001b[0m\u001b[0;34m(\u001b[0m\u001b[0minput\u001b[0m\u001b[0;34m,\u001b[0m \u001b[0mtimeout\u001b[0m\u001b[0;34m=\u001b[0m\u001b[0mtimeout\u001b[0m\u001b[0;34m)\u001b[0m\u001b[0;34m\u001b[0m\u001b[0;34m\u001b[0m\u001b[0m\n",
            "\u001b[0;32m/usr/lib/python3.11/subprocess.py\u001b[0m in \u001b[0;36m__init__\u001b[0;34m(self, args, bufsize, executable, stdin, stdout, stderr, preexec_fn, close_fds, shell, cwd, env, universal_newlines, startupinfo, creationflags, restore_signals, start_new_session, pass_fds, user, group, extra_groups, encoding, errors, text, umask, pipesize, process_group)\u001b[0m\n\u001b[1;32m   1024\u001b[0m                             encoding=encoding, errors=errors)\n\u001b[1;32m   1025\u001b[0m \u001b[0;34m\u001b[0m\u001b[0m\n\u001b[0;32m-> 1026\u001b[0;31m             self._execute_child(args, executable, preexec_fn, close_fds,\n\u001b[0m\u001b[1;32m   1027\u001b[0m                                 \u001b[0mpass_fds\u001b[0m\u001b[0;34m,\u001b[0m \u001b[0mcwd\u001b[0m\u001b[0;34m,\u001b[0m \u001b[0menv\u001b[0m\u001b[0;34m,\u001b[0m\u001b[0;34m\u001b[0m\u001b[0;34m\u001b[0m\u001b[0m\n\u001b[1;32m   1028\u001b[0m                                 \u001b[0mstartupinfo\u001b[0m\u001b[0;34m,\u001b[0m \u001b[0mcreationflags\u001b[0m\u001b[0;34m,\u001b[0m \u001b[0mshell\u001b[0m\u001b[0;34m,\u001b[0m\u001b[0;34m\u001b[0m\u001b[0;34m\u001b[0m\u001b[0m\n",
            "\u001b[0;32m/usr/lib/python3.11/subprocess.py\u001b[0m in \u001b[0;36m_execute_child\u001b[0;34m(self, args, executable, preexec_fn, close_fds, pass_fds, cwd, env, startupinfo, creationflags, shell, p2cread, p2cwrite, c2pread, c2pwrite, errread, errwrite, restore_signals, gid, gids, uid, umask, start_new_session, process_group)\u001b[0m\n\u001b[1;32m   1953\u001b[0m                         \u001b[0merr_msg\u001b[0m \u001b[0;34m=\u001b[0m \u001b[0mos\u001b[0m\u001b[0;34m.\u001b[0m\u001b[0mstrerror\u001b[0m\u001b[0;34m(\u001b[0m\u001b[0merrno_num\u001b[0m\u001b[0;34m)\u001b[0m\u001b[0;34m\u001b[0m\u001b[0;34m\u001b[0m\u001b[0m\n\u001b[1;32m   1954\u001b[0m                     \u001b[0;32mif\u001b[0m \u001b[0merr_filename\u001b[0m \u001b[0;32mis\u001b[0m \u001b[0;32mnot\u001b[0m \u001b[0;32mNone\u001b[0m\u001b[0;34m:\u001b[0m\u001b[0;34m\u001b[0m\u001b[0;34m\u001b[0m\u001b[0m\n\u001b[0;32m-> 1955\u001b[0;31m                         \u001b[0;32mraise\u001b[0m \u001b[0mchild_exception_type\u001b[0m\u001b[0;34m(\u001b[0m\u001b[0merrno_num\u001b[0m\u001b[0;34m,\u001b[0m \u001b[0merr_msg\u001b[0m\u001b[0;34m,\u001b[0m \u001b[0merr_filename\u001b[0m\u001b[0;34m)\u001b[0m\u001b[0;34m\u001b[0m\u001b[0;34m\u001b[0m\u001b[0m\n\u001b[0m\u001b[1;32m   1956\u001b[0m                     \u001b[0;32melse\u001b[0m\u001b[0;34m:\u001b[0m\u001b[0;34m\u001b[0m\u001b[0;34m\u001b[0m\u001b[0m\n\u001b[1;32m   1957\u001b[0m                         \u001b[0;32mraise\u001b[0m \u001b[0mchild_exception_type\u001b[0m\u001b[0;34m(\u001b[0m\u001b[0merrno_num\u001b[0m\u001b[0;34m,\u001b[0m \u001b[0merr_msg\u001b[0m\u001b[0;34m)\u001b[0m\u001b[0;34m\u001b[0m\u001b[0;34m\u001b[0m\u001b[0m\n",
            "\u001b[0;31mFileNotFoundError\u001b[0m: [Errno 2] No such file or directory: './nbody'"
          ]
        }
      ]
    }
  ]
}