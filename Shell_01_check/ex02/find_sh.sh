find . -type f -name "*.sh" -exec basename {} \; | tr -d '.sh'
