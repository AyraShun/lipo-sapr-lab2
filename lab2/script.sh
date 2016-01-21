#!/bin/bash
grep '#define' | sed 's|.*define|#define|'| sort -u | grep -c '"*"'