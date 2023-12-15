FROM node:14
WORKDIR /usr/src/app
COPY package.json ./
RUN npm install
COPY . .
ENV NODE_ENV production
CMD ["node", "server.js"]
