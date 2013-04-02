# Created by: Gvozdikov Veniamin <g.veniamin@googlemail.com>
# $FreeBSD$

PORTNAME=	nmapsi4
PORTVERSION=	0.4.1
CATEGORIES=	security
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	GUI frontend for the nmap scanning utility

LICENSE=	GPLv2

RUN_DEPENDS=	${LOCALBASE}/bin/nmap:${PORTSDIR}/security/nmap

USES=		cmake
USE_BZIP2=	yes
INSTALLS_ICONS=	yes
USE_QT4=	gui xml qmake_build uic_build moc_build rcc_build network \
		linguist webkit dbus

pre-configure:
	${REINPLACE_CMD} -e 's#share/applications/kde4/#share/applications/#g' \
		${WRKSRC}/src/CMakeLists.txt

.include <bsd.port.mk>
