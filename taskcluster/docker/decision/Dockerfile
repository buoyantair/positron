FROM          ubuntu:16.04
MAINTAINER    Greg Arndt <garndt@mozilla.com>

# Add worker user
RUN useradd -d /home/worker -s /bin/bash -m worker
RUN mkdir /home/worker/artifacts && chown worker:worker /home/worker/artifacts

# %include taskcluster/docker/recipes/tooltool.py
ADD topsrcdir/taskcluster/docker/recipes/tooltool.py /tmp/tooltool.py

# %include testing/mozharness/external_tools/robustcheckout.py
ADD topsrcdir/testing/mozharness/external_tools/robustcheckout.py /usr/local/mercurial/robustcheckout.py

# %include taskcluster/docker/recipes/install-mercurial.sh
ADD topsrcdir/taskcluster/docker/recipes/install-mercurial.sh /tmp/install-mercurial.sh

ADD system-setup.sh /tmp/system-setup.sh
RUN bash /tmp/system-setup.sh

# %include taskcluster/docker/recipes/run-task
ADD topsrcdir/taskcluster/docker/recipes/run-task /home/worker/bin/run-task

ENV PATH /home/worker/bin:$PATH
ENV SHELL /bin/bash
ENV HOME /home/worker

# Set a default command useful for debugging
CMD ["/bin/bash", "--login"]
