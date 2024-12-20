This test project is intended for a deeper study of the operation of sockets and their interactions on the example of an IRC chat/server. The test project is built via Makefile and is run using the following command:

./ircserv [port] [pass]


 Description
IRC (Internet Relay Chat) - an application-level Protocol for exchanging messages in real-time. Designed primarily for group communication, it also allows you to communicate via private messages and exchange data, including files. IRC uses the TCP transport protocol and cryptographic TLS (optional). IRC began to gain particular popularity after Operation "Desert Storm" (1991), when messages from all over the world were collected in one place and broadcast on-line to IRC. Due to the technical simplicity of implementation, the IRC protocol was used in the organization of botnets as a means of transmitting control commands to the computers participating in the botnet from the owner.

🌎 IRC network
According to the protocol specifications, an IRC network is a group of servers connected to each other. The simplest network is a single server. The network should have the form of a connected tree, in which each server is the central node for the rest of the network. A client is anything that is connected to the server, except for other servers. There are two types of customers:

custom settings;
service stations.
More detailed information is contained in then subject.txt 📌If you have any questions or find bugs, write to the issues section.
![network](https://github.com/smorayzmaaitat/ft_irc/assets/65847371/ab2c1e2f-0e4d-4aa8-80db-ba17115d6446)<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<svg xmlns:dc="http://purl.org/dc/elements/1.1/" xmlns:cc="http://creativecommons.org/ns#" xmlns:rdf="http://www.w3.org/1999/02/22-rdf-syntax-ns#" xmlns:svg="http://www.w3.org/2000/svg" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:sodipodi="http://sodipodi.sourceforge.net/DTD/sodipodi-0.dtd" xmlns:inkscape="http://www.inkscape.org/namespaces/inkscape" version="1.0" width="300" height="290" id="svg2" sodipodi:docname="Ircnetz-Schema.svg" inkscape:version="1.0beta1 (unknown)">
  <title id="title96">Ircnetz-Schema</title>
  <metadata id="metadata88">
    <rdf:RDF>
      <cc:Work rdf:about="">
        <dc:format>image/svg+xml</dc:format>
        <dc:type rdf:resource="http://purl.org/dc/dcmitype/StillImage"/>
        <dc:title>Ircnetz-Schema</dc:title>
        <dc:description>Depiction of an exemplary IRC-Network with IRC-Servers (Hub/Leaf), IRC-clients, IRC-services, IRC-Bots and bouncers</dc:description>
        <dc:publisher>
          <cc:Agent>
            <dc:title>D0ktorz, Wolle1024</dc:title>
          </cc:Agent>
        </dc:publisher>
        <dc:rights>
          <cc:Agent>
            <dc:title>Public domain</dc:title>
          </cc:Agent>
        </dc:rights>
        <cc:license rdf:resource="http://creativecommons.org/publicdomain/zero/1.0/"/>
        <dc:source>https://de.wikipedia.org/wiki/Datei:Ircnetz-Schema.svg</dc:source>
      </cc:Work>
      <cc:License rdf:about="http://creativecommons.org/publicdomain/zero/1.0/">
        <cc:permits rdf:resource="http://creativecommons.org/ns#Reproduction"/>
        <cc:permits rdf:resource="http://creativecommons.org/ns#Distribution"/>
        <cc:permits rdf:resource="http://creativecommons.org/ns#DerivativeWorks"/>
      </cc:License>
    </rdf:RDF>
  </metadata>
  <sodipodi:namedview pagecolor="#ffffff" bordercolor="#666666" inkscape:document-rotation="0" borderopacity="1" objecttolerance="10" gridtolerance="10" guidetolerance="10" inkscape:pageopacity="0" inkscape:pageshadow="2" inkscape:window-width="1916" inkscape:window-height="1033" id="namedview86" showgrid="false" inkscape:zoom="3.0655172" inkscape:cx="150" inkscape:cy="134.5613" inkscape:window-x="0" inkscape:window-y="0" inkscape:window-maximized="0" inkscape:current-layer="g10974"/>
  <defs id="defs4">
    <linearGradient id="linearGradient10924">
      <stop style="stop-color:#2ca089;stop-opacity:1" offset="0" id="stop10926"/>
      <stop style="stop-color:#a00;stop-opacity:1" offset="1" id="stop10928"/>
    </linearGradient>
    <linearGradient x1="221.14291" y1="358.24973" x2="254.5199" y2="358.24973" id="linearGradient10930" xlink:href="#linearGradient10924" gradientUnits="userSpaceOnUse"/>
    <linearGradient x1="221.14291" y1="358.24973" x2="254.5199" y2="358.24973" id="linearGradient11051" xlink:href="#linearGradient10924" gradientUnits="userSpaceOnUse"/>
  </defs>
  <g transform="translate(-130.7143,-324.9337)" id="layer1">
    <g transform="translate(2.500005,3.428615)" id="g10974">
      <path d="M 85 380.57648 A 34.642857 34.642857 0 1 1  15.714287,380.57648 A 34.642857 34.642857 0 1 1  85 380.57648 z" transform="matrix(0.484536,0,0,0.484536,185.243,158.3164)" style="opacity:1;fill:#2ca089;fill-opacity:1;stroke:black;stroke-width:4.12765932;stroke-miterlimit:10;stroke-dasharray:none;stroke-opacity:1" id="path1935"/>
      <path d="M 191.71424,420.70228 L 257.40211,385.61473" style="font-size:12px;fill:none;fill-opacity:0.75;fill-rule:evenodd;stroke:red;stroke-width:3.99999905;stroke-linecap:butt;stroke-linejoin:miter;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1" id="path2834"/>
      <path d="M 289.76617,386.33769 L 353.09098,425.52954" style="fill:red;fill-opacity:0.75;fill-rule:evenodd;stroke:red;stroke-width:3.99999905;stroke-linecap:butt;stroke-linejoin:miter;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1" id="path3724"/>
      <path d="M 269.06559,399.49296 L 236.01317,507.37454" style="fill:none;fill-opacity:0.75;fill-rule:evenodd;stroke:#a00;stroke-width:3.99999976;stroke-linecap:butt;stroke-linejoin:miter;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1" id="path3726"/>
      <path d="M 250.48045,536.33769 L 313.80526,575.52954" style="fill:red;fill-opacity:0.75;fill-rule:evenodd;stroke:red;stroke-width:3.99999905;stroke-linecap:butt;stroke-linejoin:miter;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1" id="path6384"/>
      <rect width="9.000001" height="9" x="140.00002" y="399.79074" style="opacity:1;fill:#00ed00;fill-opacity:1;stroke:black;stroke-width:1;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1" id="rect6386"/>
      <rect width="9.000001" height="9" x="131.21429" y="425.00504" style="opacity:1;fill:#00ed00;fill-opacity:1;stroke:black;stroke-width:1;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1" id="rect7273"/>
      <rect width="9.000001" height="9" x="170.5" y="464.29074" style="opacity:1;fill:#00ed00;fill-opacity:1;stroke:black;stroke-width:1;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1" id="rect7275"/>
      <rect width="9.000001" height="9" x="222.64285" y="459.29074" style="opacity:1;fill:#00ed00;fill-opacity:1;stroke:black;stroke-width:1;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1" id="rect7277"/>
      <rect width="9.000001" height="9" x="236.92856" y="407.14792" style="opacity:1;fill:#00ed00;fill-opacity:1;stroke:black;stroke-width:1;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1" id="rect7279"/>
      <rect width="9.000001" height="9" x="215.5" y="392.14789" style="opacity:1;fill:#00ed00;fill-opacity:1;stroke:black;stroke-width:1;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1" id="rect7281"/>
      <rect width="9.000001" height="9" x="230.5" y="367.86218" style="opacity:1;fill:#00ed00;fill-opacity:1;stroke:black;stroke-width:1;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1" id="rect7283"/>
      <rect width="9.000001" height="9" x="354.78574" y="387.14789" style="opacity:1;fill:#00ed00;fill-opacity:1;stroke:black;stroke-width:1;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1" id="rect7287"/>
      <rect width="9.000001" height="9" x="409.07144" y="434.29074" style="opacity:1;fill:#00ed00;fill-opacity:1;stroke:black;stroke-width:1;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1" id="rect7289"/>
      <rect width="9.000001" height="9" x="346.92856" y="467.86218" style="opacity:1;fill:#00ed00;fill-opacity:1;stroke:black;stroke-width:1;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1" id="rect7291"/>
      <rect width="9.000001" height="9" x="308.35715" y="530.7193" style="opacity:1;fill:#00ed00;fill-opacity:1;stroke:black;stroke-width:1;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1" id="rect7293"/>
      <rect width="9.000001" height="9" x="406.92859" y="570.00507" style="opacity:1;fill:#00ed00;fill-opacity:1;stroke:black;stroke-width:1;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1" id="rect7295"/>
      <rect width="9.000001" height="9" x="276.21429" y="592.14795" style="opacity:1;fill:#00ed00;fill-opacity:1;stroke:black;stroke-width:1;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1" id="rect7299"/>
      <rect width="9.000001" height="9" x="238.35713" y="569.29077" style="opacity:1;fill:#00ed00;fill-opacity:1;stroke:black;stroke-width:1;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1" id="rect7301"/>
      <rect width="9.000001" height="9" x="189.78572" y="542.86218" style="opacity:1;fill:#00ed00;fill-opacity:1;stroke:black;stroke-width:1;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1" id="rect7303"/>
      <rect width="9.000001" height="9" x="156.92857" y="517.86218" style="opacity:1;fill:#00ed00;fill-opacity:1;stroke:black;stroke-width:1;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1" id="rect7305"/>
      <rect width="9.000001" height="9" x="206.92857" y="487.86221" style="opacity:1;fill:#00ed00;fill-opacity:1;stroke:black;stroke-width:1;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1" id="rect7307"/>
      <rect width="9.000001" height="9" x="188.35713" y="387.14789" style="opacity:1;fill:#afdde9;fill-opacity:1;stroke:black;stroke-width:1;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1" id="rect7309"/>
      <rect width="9.000001" height="9" x="416.21429" y="408.57648" style="opacity:1;fill:#afdde9;fill-opacity:1;stroke:black;stroke-width:1;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1" id="rect7311"/>
      <rect width="9.000001" height="9" x="261.92859" y="502.86218" style="opacity:1;fill:#afdde9;fill-opacity:1;stroke:black;stroke-width:1;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1" id="rect7313"/>
      <rect width="9.000001" height="9" x="208.35715" y="562.14789" style="opacity:1;fill:#afdde9;fill-opacity:1;stroke:black;stroke-width:1;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1" id="rect7315"/>
      <rect width="9.000001" height="9" x="366.92856" y="557.86218" style="opacity:1;fill:#ffb380;fill-opacity:1;stroke:black;stroke-width:1;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1" id="rect7317"/>
      <rect width="9.000001" height="9" x="186.21428" y="504.29074" style="opacity:1;fill:#ffb380;fill-opacity:1;stroke:black;stroke-width:1;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1" id="rect7321"/>
      <path d="M 166.42857,520.04511 L 185.71428,511.10782" inkscape:connection-start="#rect7305" inkscape:connection-end="#rect7321" style="fill:none;fill-opacity:0.75;fill-rule:evenodd;stroke:lime;stroke-width:1px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1" id="path7325"/>
      <path d="M 213.74338,497.362 L 219.50128,509.21906" style="fill:none;fill-opacity:0.75;fill-rule:evenodd;stroke:lime;stroke-width:1px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1" id="path8212"/>
      <path d="M 261.42873,510.53521 L 251.11944,517.29072" style="fill:none;fill-opacity:0.75;fill-rule:evenodd;stroke:lime;stroke-width:1.00000012px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1" id="path8214"/>
      <path d="M 199.2856,545.01521 L 208.2501,540.28051" style="fill:none;fill-opacity:0.75;fill-rule:evenodd;stroke:lime;stroke-width:0.99999988px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1" id="path8216"/>
      <path d="M 195.7142,511.66116 L 210.07133,520.24038" style="fill:none;fill-opacity:0.75;fill-rule:evenodd;stroke:lime;stroke-width:0.99999994px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1" id="path8218"/>
      <path d="M 215.15705,561.64765 L 219.46851,553.06878" style="fill:none;fill-opacity:0.75;fill-rule:evenodd;stroke:lime;stroke-width:0.99999982px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1" id="path8220"/>
      <path d="M 241.2739,568.79066 L 234.21718,548.00485" style="fill:none;fill-opacity:0.75;fill-rule:evenodd;stroke:lime;stroke-width:1px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1" id="path8222"/>
      <path d="M 285.71434,593.99184 L 305.52087,583.31771" style="fill:none;fill-opacity:0.75;fill-rule:evenodd;stroke:lime;stroke-width:1.00000024px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1" id="path8224"/>
      <path d="M 336.02313,590.93281 L 342.75469,598.36141" style="fill:none;fill-opacity:0.75;fill-rule:evenodd;stroke:lime;stroke-width:1px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1" id="path8226"/>
      <path d="M 376.42856,563.88004 L 406.42859,572.98721" inkscape:connection-start="#rect7317" inkscape:connection-end="#rect7295" style="fill:none;fill-opacity:0.75;fill-rule:evenodd;stroke:lime;stroke-width:1px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1" id="path8228"/>
      <path d="M 366.42843,563.47318 L 351.12535,566.94145" style="fill:none;fill-opacity:0.75;fill-rule:evenodd;stroke:lime;stroke-width:0.99999976px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1" id="path8230"/>
      <path d="M 314.68414,540.21957 L 319.03759,551.00538" style="fill:none;fill-opacity:0.75;fill-rule:evenodd;stroke:lime;stroke-width:1.00000024px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1" id="path8232"/>
      <path d="M 377.29611,451.2192 L 382.8595,483.07637" style="fill:none;fill-opacity:0.75;fill-rule:evenodd;stroke:lime;stroke-width:0.99999982px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1" id="path8234"/>
      <path d="M 356.4287,474.86218 L 379.28587,486.32261" style="fill:none;fill-opacity:0.75;fill-rule:evenodd;stroke:lime;stroke-width:1.00000024px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1" id="path8236"/>
      <path d="M 408.57155,438.50798 L 396.00013,435.43496" style="fill:none;fill-opacity:0.75;fill-rule:evenodd;stroke:lime;stroke-width:1.00000012px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1" id="path8238"/>
      <path d="M 415.71424,414.79309 L 395.64283,421.80149" style="fill:none;fill-opacity:0.75;fill-rule:evenodd;stroke:lime;stroke-width:1.00000012px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1" id="path8240"/>
      <path d="M 388.42286,409.14808 L 393.00697,403.50525" style="fill:none;fill-opacity:0.75;fill-rule:evenodd;stroke:lime;stroke-width:1px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1" id="path8242"/>
      <path d="M 361.07821,396.64782 L 365.26555,407.43355" style="fill:none;fill-opacity:0.75;fill-rule:evenodd;stroke:lime;stroke-width:1px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1" id="path8244"/>
      <path d="M 239.99994,373.06324 L 248.99995,374.51181" style="fill:none;fill-opacity:0.75;fill-rule:evenodd;stroke:lime;stroke-width:1px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1" id="path8248"/>
      <path d="M 191.3571,417.39484 L 215.00001,400.24172" style="fill:none;fill-opacity:0.75;fill-rule:evenodd;stroke:lime;stroke-width:1.00000012px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1" id="path8252"/>
      <path d="M 190.40441,396.64747 L 183.55114,409.7872" style="fill:none;fill-opacity:0.75;fill-rule:evenodd;stroke:lime;stroke-width:1.00000024px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1" id="path8254"/>
      <path d="M 156.28579,414.73775 L 148.28576,407.49525" style="fill:none;fill-opacity:0.75;fill-rule:evenodd;stroke:lime;stroke-width:1px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1" id="path8256"/>
      <path d="M 140.7143,429.50504 L 148.2857,429.50503" inkscape:connection-start="#rect7273" inkscape:connection-end="#path2828" style="fill:none;fill-opacity:0.75;fill-rule:evenodd;stroke:lime;stroke-width:1px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1" id="path8258"/>
      <path d="M 174.9092,463.7905 L 174.18321,450.86192" style="fill:none;fill-opacity:0.75;fill-rule:evenodd;stroke:lime;stroke-width:0.99999994px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1" id="path8260"/>
      <path d="M 222.14292,460.54762 L 192.21798,441.01284" style="fill:none;fill-opacity:0.75;fill-rule:evenodd;stroke:lime;stroke-width:1.00000012px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1" id="path8262"/>
      <path d="M 246.11289,406.64757 L 258.38584,393.71876" style="fill:none;fill-opacity:0.75;fill-rule:evenodd;stroke:lime;stroke-width:1.00000012px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1" id="path8264"/>
      <rect width="9.000001" height="9" x="378.35715" y="483.57648" style="opacity:1;fill:#ffb380;fill-opacity:1;stroke:black;stroke-width:1;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1" id="rect7319"/>
      <path d="M 85 380.57648 A 34.642857 34.642857 0 1 1  15.714287,380.57648 A 34.642857 34.642857 0 1 1  85 380.57648 z" transform="matrix(0.721649,0,0,0.721649,336.517,154.8624)" style="opacity:1;fill:red;fill-opacity:1;stroke:black;stroke-width:2.77142835;stroke-miterlimit:10;stroke-dasharray:none;stroke-opacity:1" id="path2826"/>
      <path d="M 85 380.57648 A 34.642857 34.642857 0 1 1  15.714287,380.57648 A 34.642857 34.642857 0 1 1  85 380.57648 z" transform="matrix(0.721649,0,0,0.721649,236.8741,103.0765)" style="opacity:1;fill:#a00;fill-opacity:1;stroke:black;stroke-width:2.77142835;stroke-miterlimit:10;stroke-dasharray:none;stroke-opacity:1" id="path2824"/>
      <path d="M 85 380.57648 A 34.642857 34.642857 0 1 1  15.714287,380.57648 A 34.642857 34.642857 0 1 1  85 380.57648 z" transform="matrix(0.721649,0,0,0.721649,137.9455,154.8624)" style="opacity:1;fill:red;fill-opacity:1;stroke:black;stroke-width:2.77142835;stroke-miterlimit:10;stroke-dasharray:none;stroke-opacity:1" id="path2828"/>
      <rect width="9.000001" height="9" x="390.5" y="396.43359" style="opacity:1;fill:#00ed00;fill-opacity:1;stroke:black;stroke-width:1;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1" id="rect7285"/>
      <path d="M 85 380.57648 A 34.642857 34.642857 0 1 1  15.714287,380.57648 A 34.642857 34.642857 0 1 1  85 380.57648 z" transform="matrix(0.721649,0,0,0.721649,290.3029,297.7196)" style="opacity:1;fill:red;fill-opacity:1;stroke:black;stroke-width:2.77142835;stroke-miterlimit:10;stroke-dasharray:none;stroke-opacity:1" id="path2830"/>
      <rect width="9.000001" height="9" x="341.21429" y="598.57648" style="opacity:1;fill:#00ed00;fill-opacity:1;stroke:black;stroke-width:1;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1" id="rect7297"/>
      <path d="M 85 380.57648 A 34.642857 34.642857 0 1 1  15.714287,380.57648 A 34.642857 34.642857 0 1 1  85 380.57648 z" transform="matrix(0.721649,0,0,0.721649,192.9455,256.2909)" style="opacity:1;fill:#a00;fill-opacity:1;stroke:black;stroke-width:2.77142835;stroke-miterlimit:10;stroke-dasharray:none;stroke-opacity:1" id="path2832"/>
      <path d="M 252.51989,366.44029 L 223.14291,350.05918" style="fill:#2ca089;fill-opacity:0.75;fill-rule:evenodd;stroke:url(#linearGradient11051);stroke-width:4;stroke-linecap:butt;stroke-linejoin:miter;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1" id="path10037"/>
      <text x="140.35715" y="347.00504" style="font-size:12px;font-style:normal;font-weight:normal;fill:#2ca089;fill-opacity:1;stroke:none;stroke-width:1px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1;font-family:Sans" id="text10932" xml:space="preserve"><tspan x="140.35715" y="347.00504" id="tspan10934">Services</tspan></text>
      <text x="154.20853" y="433.8732" style="font-size:12px;font-style:normal;font-weight:normal;fill:black;fill-opacity:1;stroke:none;stroke-width:1px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1;font-family:Sans" id="text10936" xml:space="preserve"><tspan x="154.20853" y="433.8732" id="tspan10938">Server</tspan></text>
      <text x="253.13713" y="382.08731" style="font-size:12px;font-style:normal;font-weight:normal;fill:black;fill-opacity:1;stroke:none;stroke-width:1px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1;font-family:Sans" id="text10940" xml:space="preserve"><tspan x="253.13713" y="382.08731" id="tspan10942">Server</tspan></text>
      <text x="352.78003" y="433.8732" style="font-size:12px;font-style:normal;font-weight:normal;fill:black;fill-opacity:1;stroke:none;stroke-width:1px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1;font-family:Sans" id="text10944" xml:space="preserve"><tspan x="352.78003" y="433.8732" id="tspan10946">Server</tspan></text>
      <text x="209.20853" y="535.3017" style="font-size:12px;font-style:normal;font-weight:normal;fill:black;fill-opacity:1;stroke:none;stroke-width:1px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1;font-family:Sans" id="text10948" xml:space="preserve"><tspan x="209.20853" y="535.3017" id="tspan10950">Server</tspan></text>
      <text x="306.56595" y="576.73041" style="font-size:12px;font-style:normal;font-weight:normal;fill:black;fill-opacity:1;stroke:none;stroke-width:1px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1;font-family:Sans" id="text10952" xml:space="preserve"><tspan x="306.56595" y="576.73041" id="tspan10954">Server</tspan></text>
    </g>
    <text xml:space="preserve" style="font-style:normal;font-variant:normal;font-weight:normal;font-stretch:normal;font-size:13.3333px;line-height:1.25;font-family:sans-serif;-inkscape-font-specification:'sans-serif Normal';font-variant-ligatures:normal;font-variant-caps:normal;font-variant-numeric:normal;font-variant-east-asian:normal;fill:#ffb380;fill-opacity:1;stroke:none" x="368.06232" y="508.08936" id="text92"><tspan sodipodi:role="line" id="tspan90" x="368.06232" y="508.08936">Bouncer</tspan></text>
    <text id="text92-3" y="384.05356" x="339.92416" style="font-style:normal;font-variant:normal;font-weight:normal;font-stretch:normal;font-size:13.3333px;line-height:1.25;font-family:sans-serif;-inkscape-font-specification:'sans-serif Normal';font-variant-ligatures:normal;font-variant-caps:normal;font-variant-numeric:normal;font-variant-east-asian:normal;fill:#00ed00;fill-opacity:1;stroke:none" xml:space="preserve"><tspan sodipodi:role="line" id="tspan112" x="339.92416" y="384.05356">Client</tspan></text>
    <text id="text92-6" y="502.72357" x="254.12173" style="font-style:normal;font-variant:normal;font-weight:normal;font-stretch:normal;font-size:13.3333px;line-height:1.25;font-family:sans-serif;-inkscape-font-specification:'sans-serif Normal';font-variant-ligatures:normal;font-variant-caps:normal;font-variant-numeric:normal;font-variant-east-asian:normal;fill:#afdde9;fill-opacity:1;stroke:none" xml:space="preserve"><tspan y="502.72357" x="254.12173" id="tspan90-4" sodipodi:role="line">Bot</tspan></text>
    <text xml:space="preserve" style="font-style:normal;font-weight:normal;font-size:21.3333px;line-height:1.25;font-family:sans-serif;fill:#000000;fill-opacity:1;stroke:none" x="327.47522" y="349.11209" id="text134"><tspan sodipodi:role="line" id="tspan132" x="327.47522" y="349.11209">Network</tspan></text>
  </g>
</svg>


Forwarding messages in the IRC network
IRC provides both group and private communication. There are several possibilities for group communication. A user can send a message to a list of users, and a list is sent to the server, the server selects individual users from it, and sends a copy of the message to each of them. More efficient is the use of channels. In this case, the message is sent directly to the server, and the server sends it to all users in the channel. In both group and private communication, messages are sent to clients via the shortest path and are visible only to the sender, recipient, and incoming servers. It is also possible to send a broadcast message. Client messages regarding changes in the network state (for example, channel mode or user status) must be sent to all servers that are part of the network. All messages originating from the server must also be sent to all other servers.
