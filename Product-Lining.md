# Product Lining

1. CurlyApp: GET the data from RESTful API and convert it to GUI

    1. libcurlbd: safety bridge for JSON and binary data, network handler, I/O handler

    2. compactcurl: cURL modified to run on anything with IPv4

    3. ffmpeg-nmbd: converting binary to usable media for apps

    4. mpv: media player (temp alternative to exoplayer and vlc)

    5. 7z: extract compressed assets, library and binary

    6. sqlite: store cURL data as usable data for apps (JSON optional)

    7. framebridge: secure bridge between all the process

    8. json-parser: parse JSON for function that doesn’t support JSON

    9. autodep: automatically manage dependencies before compiling

    10. oss-webkit: universal webkit built from gecko and khtml but slightly improved for webview usage and made modular

    11. debloat: convert electron to GTK/Qt + CurlyApp stack

2. IndiviChunk: slice the bit for easier sending

    1. nginx: reverse proxy for sending out sliced requests

    2. agentdb: useragent list for seperating downloader from scraper

    3. tar: compressing and archiving GNU archive that isnt archived enough for slicing

    4. 7z: compressing and archiving proprietary archive that isnt archived enough for slicing

    5. uncompress: decompress archive automatically based on the signature, segments and structure of the archive without waiting for downloads to finish

    6. slice: slice the data

    7. blobmgr.cpp: sliced data blob manager and allocater

3. DemOS: OS with yet better compatibility than windows at lower resource cost

    1. multibase: kernel modification for running multiple kernel at once

    2. linux-multibase: linux kernel addon for multibase

    3. unix-multibase: unix kernel addon for multibase

    4. ntkrnl-multibase: nt kernel (windows) addon for multibase

    5. mac-multibase: unix-like mac kernel addon for multibase

    6. bsd-multibase: bsd kernel addon for multibase

    7. beos-multibase: beos kernel addon for multibase

    8. wine: compatibility layer for linux (solely for saving resource instead of running full nt kernel and its services

    9. wine64: wine but modified for 64bit

    10. wine-128: wine but modified for 128bit

    11. wine-16: wine but downgraded to be compatible with 16 bit

    12. driverbase: driver extension for each multibase addon

    13. converto: convert weird proprietary api to api compatible with multibase

    14. wine-mono-ext: wine-mono extended for weird and edgy api

    15. wine-gecko-ext: convert html embedding and webview implementation of apps into oss-webkit

    16. shellrunner: run shell script for other operating system in multibase kernel

    17. demkernel: demos actual kernel

    18. winframe: compatibility layer for weird and proprietary ui framework

    19. xdg-open: open files in their assigned apps

    20. nix: immutable system environment implementation + immutable apps sandbox

    21. pm: package manager solution for pulling apps from apps repository of any kind

    22. build: build and compile binary from source files productively

    23. drive-layer: manage drive and provide :$DISK;$PART/ path

    24. vibe-analyze: machine learning vibe from your file for better optimization without making your data public

    25. adv-ring: kernel privilege provider (privilege higher than root)

4. marklist: database fast enough to overtake cloudflare

    1. sqlite-compt: compatibility layer for sqlite

    2. mysql-compt: compatibility layer for mysql

    3. postgres-compt: compatibility layer for postgres

    4. keystore: key storage provider but the index is just hash

    5. psychic: lead the data to its wanted location and hash its address

    6. nosql-cmd: nosql command provider

    7. sql-cmd: sql command provider

    8. cache: provide data to cache to reduce workload and increase cache hit rate

    9. sentient: control the file to ensure it is NOT too sentient by using sentient software instead of just using ML

5. peering: meeting services but the infrastructure is basically reception and a bunch of meeting room in the host's house

    1. marklist: provide list of meeting and crucial data for joining the meeting

    2. highways: reverse proxy services that have a little knowledge about blocking bad requests but ton about how to abuse L1 cache

    3. tls-provider: cert protocol client automated agent

    4. p2p-serve: p2p runtime for both host and employee

    5. p2p-host: host db when db is down

6. stringline: streaming services but its p2p

    1. marklist: provide list of stream

    2. highways: reverse proxy services that have a little knowledge about blocking bad requests but ton about how to abuse L1 cache

    3. tls-provider: cert protocol client automated agent

    4. p2p-serve: p2p runtime for both audience and streamer

    5. p2p-host: host db when db is down

7. waiterlane: file sharing that totally didnt break the physics

    1. p2p-serve: p2p runtime for sharing files

    2. p2p-host: provide map

    3. marklist: provide map on prod

    4. highways: provide way to access

    5. netgate: ask network to make way nicely

    6. pathfindar: find fastest path even if it violate the network law



