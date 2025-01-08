FROM ubuntu:18.04

# Install dependencies
RUN apt-get update && apt-get install -y \
    m4 make wget patch unzip bubblewrap git g++ \
    libgtk2.0-dev

# Install Lustre v4
RUN wget https://www-verimag.imag.fr/DIST-TOOLS/SYNCHRONE/lustre-v4/distrib/archives/lustre-v4-III-e-linux64.tgz \
    && tar -xf lustre-v4-III-e-linux64.tgz \
    && cp -R lustre-v4-III-e0-linux64 /usr/local/ \
    && echo "export LUSTRE_INSTALL=/usr/local/lustre-v4-III-e0-linux64" >> ~/.bashrc \
    && echo "source $LUSTRE_INSTALL/setenv.sh" >> ~/.bashrc

# Install opam
RUN apt-get install -y curl
# Install opam with default values, custom installation location, and disable sandboxing
RUN wget https://raw.githubusercontent.com/ocaml/opam/master/shell/install.sh && \
    echo | sh install.sh

RUN opam init -y \
    && eval $(opam env) \
    && opam switch create 4.03.0 -y \
    && eval $(opam env)

# Install Heptagon dependencies
RUN opam install menhir lablgtk ocamlgraph ocamlbuild camlp4 -y

# Download and install Heptagon
RUN wget https://raw.githubusercontent.com/rutujaekatpure/CS684_Labs/main/2023/heptagon-1.05.00.zip \
    && unzip heptagon-1.05.00.zip \
    && cd heptagon-1.05.00 \
    && eval $(opam env) && ./configure && make && make install

# Set environment variables for Heptagon
ENV PATH="$PATH:/usr/local/bin"
    
