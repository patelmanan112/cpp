# Backend Development — Last-Minute Revision Notes

---

# UNIT 1: Introduction to Back-End Development

## 1. Introduction to Back-End Development
- Back-end = server-side part of an app: handles logic, database, authentication, APIs.
- Works behind the scenes; front-end (client) talks to back-end via requests.

## 2. Role of Back-End in Web Applications
- Processes business logic, stores/retrieves data, manages users/sessions, ensures security, serves data to front-end via APIs.

## 3. HTTP & HTTPS Protocols
- HTTP = HyperText Transfer Protocol, stateless, client-server protocol for transferring data.
- HTTPS = HTTP + SSL/TLS encryption, secure, uses port 443 (HTTP uses port 80).
- Stateless: each request independent, no memory of previous requests (cookies/sessions/tokens used to maintain state).

## 4. Request–Response Lifecycle
- Client sends HTTP request (method, URL, headers, body) → Server processes → Server sends HTTP response (status code, headers, body) → Client renders/uses data.
- Steps: DNS lookup → TCP connection → request sent → server processing → response sent → connection closed/kept alive.

## 5. REST, CRUD & HTTP Status Codes
- REST = Representational State Transfer; architecture style using stateless HTTP, resources identified by URLs.
- CRUD = Create, Read, Update, Delete → maps to POST, GET, PUT/PATCH, DELETE.
- Status codes:
  - 1xx Informational
  - 2xx Success (200 OK, 201 Created, 204 No Content)
  - 3xx Redirection (301, 302, 304)
  - 4xx Client Error (400 Bad Request, 401 Unauthorized, 403 Forbidden, 404 Not Found, 409 Conflict)
  - 5xx Server Error (500 Internal Server Error, 502 Bad Gateway, 503 Service Unavailable)

## 6. Introduction to Node.js
- Node.js = JavaScript runtime built on Chrome's V8 engine, runs JS outside browser.
- Single-threaded, event-driven, non-blocking I/O — good for I/O-heavy, scalable apps.

## 7. Node.js vs Traditional Server-side Frameworks
- Traditional (PHP, Java) often multi-threaded, blocking I/O per request.
- Node.js: single-threaded event loop + async callbacks → handles many concurrent connections efficiently with less memory overhead.
- Node.js uses JS everywhere (full-stack JS); non-blocking model suits real-time apps (chat, streaming).

## 8. Setting up Node.js
- Install Node.js (includes npm) from nodejs.org.
- Verify: `node -v`, `npm -v`.
- `npm init -y` creates package.json to manage dependencies/scripts.

## 9. Node.js Runtime
- Components: V8 engine (executes JS), libuv (handles async I/O, thread pool, event loop), Node bindings (C++ APIs).
- Event Loop: handles callbacks, timers, I/O events in phases (timers, pending callbacks, poll, check, close callbacks).

## 10. Node.js Core Modules

### File System (`fs`)
- Read/write/delete/rename files.
- `fs.readFile()` / `fs.writeFile()` — async (non-blocking).
- `fs.readFileSync()` / `fs.writeFileSync()` — sync (blocking).
- Other: `fs.appendFile()`, `fs.unlink()`, `fs.mkdir()`, `fs.existsSync()`.

### HTTP
- `http` module creates a raw server without frameworks.
- `http.createServer((req, res) => {...}).listen(port)`.
- `req` = incoming request object (url, method, headers).
- `res` = response object (`res.writeHead()`, `res.end()`).

### Path
- Handles/transforms file paths cross-platform.
- `path.join()`, `path.resolve()`, `path.basename()`, `path.extname()`, `path.dirname()`.

### Events
- `EventEmitter` class — core of Node's event-driven architecture.
- `.on(event, callback)` to listen, `.emit(event)` to trigger.
- Used internally by streams, HTTP server, etc.

---

# UNIT 2: Creating APIs with Node.js

## 1. REST Principles
- Stateless, client-server, uniform interface, resource-based URLs, cacheable responses, layered system.
- Resources represented as nouns (e.g., `/users`), actions via HTTP verbs.

## 2. API Endpoints & Resources
- Endpoint = specific URL + HTTP method combo (e.g., `GET /users/:id`).
- Resource = entity being manipulated (user, product, order).

## 3. API URL Design
- Use plural nouns: `/users`, not verbs like `/getUsers`.
- Nesting for relationships: `/users/:id/orders`.
- Use query params for filtering/sorting/pagination, not separate endpoints.

## 4. Express.js
- Minimal, flexible Node.js web framework simplifying routing, middleware, request handling.
- `const express = require('express'); const app = express();`
- `app.listen(port, callback)`.

## 5. Creating REST APIs (Express)
- Define routes per resource and HTTP method; use `express.json()` middleware to parse JSON body.

## 6. GET, POST, PUT & DELETE Requests
- GET — retrieve data (`app.get()`).
- POST — create new resource (`app.post()`), data in body.
- PUT — full update of resource (`app.put()`).
- PATCH — partial update.
- DELETE — remove resource (`app.delete()`).

## 7. Middleware
- Function with `(req, res, next)` signature, executes during request-response cycle.
- Types: application-level, router-level, built-in (`express.json()`), third-party (`cors`, `morgan`), error-handling (4 args).
- Call `next()` to pass control to next middleware/route.

## 8. Routing
- Mapping URL + HTTP method to handler function.
- `express.Router()` used to modularize routes into separate files.
- Route parameters: `/users/:id` → `req.params.id`.
- Query parameters: `/users?age=20` → `req.query.age`.

## 9. Error Handling
- Centralized error-handling middleware: `(err, req, res, next) => {...}` placed last.
- Use `try/catch` in async routes or wrapper functions; call `next(err)` to forward errors.
- Send proper status codes + error messages in response.

## 10. Custom Error Messages
- Create custom Error classes (e.g., `class ApiError extends Error`) with status codes for consistent, descriptive error responses.

## 11. Input Validation using Joi
- Joi = schema validation library for objects.
- Define schema: `Joi.object({ name: Joi.string().required(), age: Joi.number() })`.
- Validate: `schema.validate(req.body)` → returns `error`/`value`; reject request with 400 if invalid.

## 12. MongoDB
- NoSQL, document-oriented database; stores data as JSON-like BSON documents in collections.
- Schema-less/flexible; good for hierarchical/unstructured data.
- CRUD via MongoDB shell/driver: `insertOne`, `find`, `updateOne`, `deleteOne`.

## 13. Mongoose
- ODM (Object Data Modeling) library for MongoDB + Node.js.
- Defines Schemas and Models: `new mongoose.Schema({...})`, `mongoose.model('User', schema)`.
- Provides validation, middleware (hooks), query building.
- Connect: `mongoose.connect(uri)`.

## 14. Building APIs with Database Integration
- Flow: Express route → Controller → Mongoose Model → MongoDB → response.
- Use async/await with try/catch for DB calls; separate concerns (routes/controllers/models).

---

# Unit 2 (extra files): Node API Concepts

## 1. Route Parameters
- Dynamic segments in URL path: `/products/:id` → accessed via `req.params.id`. Used for identifying a specific resource.

## 2. Query Parameters
- Key-value pairs after `?` in URL: `/products?category=shoes&sort=price`.
- Accessed via `req.query`; used for filtering, sorting, searching, pagination — optional, doesn't identify a single resource.

## 3. Pagination
- Splitting large result sets into pages using `page` & `limit` query params.
- Mongoose: `.skip((page-1)*limit).limit(limit)`.
- Return metadata: total count, total pages, current page.

## 4. Sorting
- Order results by field: query param like `?sort=price` or `?sort=-price` (desc).
- Mongoose: `.sort({ price: 1 })` (asc) / `{ price: -1 }` (desc).

## 5. Search APIs
- Implement text/partial search using regex (`$regex`) or MongoDB text indexes (`$text`, `$search`).
- Combine with filters and pagination for full search functionality.

## 6. MVC Folder Structure
- Model–View–Controller pattern (View often replaced by API responses in REST APIs).
- Typical structure: `models/`, `controllers/`, `routes/`, `middleware/`, `config/`, `utils/`, `app.js`/`server.js`.
- Separates concerns: routes define endpoints, controllers contain logic, models define data schema.

## 7. Middleware (API concepts)
- Reusable functions for logging, auth checks, validation, error handling, applied globally or per-route.

## 8. Auth Basics
- Authentication = verifying identity (who you are); Authorization = verifying permissions (what you can do).
- Common methods: session-based (cookies), token-based (JWT), API keys, OAuth.

## 9. JWT Auth
- JSON Web Token: compact, self-contained token with 3 parts — Header.Payload.Signature.
- Server signs token with secret key on login; client sends token in `Authorization: Bearer <token>` header on subsequent requests.
- Server verifies signature without DB lookup (stateless auth).
- Stored client-side (localStorage/cookie); has expiry (`exp` claim).

## 10. Error Handling (API concepts)
- Use consistent error response format (status, message, code).
- Differentiate operational errors (expected, e.g. validation) vs programming errors (bugs).
- Global error-handling middleware catches all errors centrally.

## 11. Request Validation
- Validate incoming data (body/params/query) before processing, typically with Joi or express-validator.
- Prevents bad data from reaching business logic/DB.

## 12. API Rate Limiting
- Restrict number of requests a client can make in a time window to prevent abuse/DoS.
- Implemented via middleware like `express-rate-limit`; often combined with Redis for distributed limiting.
- Returns `429 Too Many Requests` when limit exceeded.

## 13. API Security Basics
- Use HTTPS, input validation/sanitization, helmet.js (secure headers), CORS configuration, rate limiting, authentication/authorization, avoid exposing stack traces, hash passwords (bcrypt), environment variables for secrets.

## 14. Logging with Morgan
- `morgan` = HTTP request logger middleware for Express.
- Logs method, URL, status, response time.
- Predefined formats: `'dev'`, `'combined'`, `'common'`, `'tiny'`.
- Usage: `app.use(morgan('dev'))`.

## 15. File Upload
- Handle multipart/form-data using `multer` middleware.
- Configure storage (disk/memory), file size limits, file type filters.
- `upload.single('field')` / `upload.array('field')` middleware on routes.

---

# UNIT 3: Monolithic Architecture and Application Design

## 1. Monolithic Architecture
- Entire application built as a single, unified codebase/deployable unit (UI + business logic + data access layer together).

## 2. Internal Structure of Monolith
- Typically layered: presentation layer → business logic layer → data access layer → database.
- All modules run in the same process and share the same codebase/memory.

## 3. Problems with Monolith
- Hard to scale individual components, large codebase becomes difficult to maintain, slower deployments, tight coupling means one bug can affect the whole app, technology lock-in (single stack).

## 4. Scaling Basics
- Scaling = increasing app's capacity to handle more load/traffic.
- Two main approaches: vertical and horizontal scaling.

## 5. Vertical vs Horizontal Scaling
- Vertical scaling (scale-up): add more resources (CPU/RAM) to a single server. Simple but has hardware limits and single point of failure.
- Horizontal scaling (scale-out): add more servers/instances and distribute load. More complex but more resilient and scalable.

## 6. Load Balancing and Caching
- Load Balancer: distributes incoming traffic across multiple servers (round robin, least connections, etc.) for reliability and performance.
- Caching: stores frequently accessed data in fast storage (e.g., Redis, in-memory) to reduce DB load and latency.

## 7. Replication & Sharding
- Replication: copying data across multiple DB servers for redundancy, availability, and read scaling (master-replica setups).
- Sharding: splitting data horizontally across multiple databases/servers based on a key, to scale writes and storage.

## 8. Microservices
- Architecture style where an app is built as a collection of small, independent, loosely-coupled services, each responsible for a specific business capability, communicating over network (often HTTP/REST or messaging).

## 9. Service Communication
- Synchronous: REST APIs, gRPC — direct request/response, simple but creates tight runtime coupling.
- Asynchronous: message brokers/queues (Kafka, RabbitMQ) — services communicate via events, decoupled, more resilient.

## 10. Service Communication — Real World Usage
- Combination used in practice: synchronous calls for real-time needs (e.g., payment confirmation), asynchronous events for background/decoupled processes (e.g., sending notifications, order processing pipelines).

## 11. Messaging and Events
- Event-driven communication: a service emits an event (e.g., "OrderCreated") to a broker/queue; other services subscribe and react independently.
- Improves decoupling, fault tolerance, and scalability; common tools: Kafka, RabbitMQ, AWS SQS/SNS.

## 12. Data Management
- In microservices, "Database per Service" pattern is common — each service owns its own database to maintain loose coupling.
- Challenges: maintaining data consistency across services (often handled via eventual consistency, sagas).

## 13. Containerization (Docker)
- Docker packages an application with all its dependencies into a lightweight, portable "container" that runs consistently across environments.
- Key concepts: Image (blueprint), Container (running instance), Dockerfile (build instructions), Docker Hub (registry).
- Commands: `docker build`, `docker run`, `docker ps`, `docker stop`.

## 14. Orchestration (Kubernetes)
- Kubernetes (K8s) automates deployment, scaling, and management of containerized applications across clusters of machines.
- Key concepts: Pod (smallest deployable unit, wraps containers), Node (machine running pods), Cluster, Deployment (manages replicas), Service (networking/load balancing), ReplicaSet, Ingress.
- Handles auto-scaling, self-healing (restarting failed pods), rolling updates.

## 15.1 Case Study: JioHotstar
- Example of a large-scale streaming platform likely using microservices + containerization + orchestration to handle massive concurrent traffic (e.g., during live cricket matches), with horizontal scaling, caching (CDN), load balancing, and event-driven architecture to manage spikes in demand reliably.

## 15.2 If Kubernetes Is Not Used
- Alternatives/manual approaches: manual container management with Docker Compose, simple load balancers + auto-scaling groups (cloud-native, e.g., AWS ECS, EC2 ASGs), serverless platforms (handle scaling automatically without container orchestration).
- Trade-offs: less automation, more manual ops work, harder self-healing, but simpler setup for smaller-scale apps.

---

# UNIT 4: Introduction to Microservices Architecture

## 1. Introduction to Microservices
- Architectural approach structuring an app as a suite of small, independently deployable services, each owning a specific business function.

## 2. Monolithic vs Microservices
| Aspect | Monolithic | Microservices |
|---|---|---|
| Codebase | Single | Multiple, independent |
| Deployment | One unit | Independent per service |
| Scaling | Whole app | Per service |
| Tech stack | Single | Can vary per service |
| Complexity | Simple to start, hard to maintain at scale | Complex ops, easier to maintain at scale |

## 3. Benefits & Challenges
- Benefits: independent scaling & deployment, technology flexibility, fault isolation, easier to understand individual services, faster team autonomy.
- Challenges: distributed system complexity, network latency, data consistency across services, harder debugging/testing, requires strong DevOps/orchestration.

## 4. Domain-Driven Design (DDD)
- Design approach focusing on modeling software around the business domain.
- Encourages collaboration between technical and domain experts; defines a shared "ubiquitous language."

## 5. Bounded Contexts
- A boundary within which a particular domain model is defined and applicable; each microservice typically maps to one bounded context, avoiding ambiguity in shared terms across different parts of the business.

## 6. Communication Between Microservices

### REST
- HTTP-based, synchronous, simple, widely supported; uses JSON over HTTP verbs.

### gRPC
- High-performance RPC framework by Google using Protocol Buffers (binary format) over HTTP/2; supports streaming, faster and more efficient than REST/JSON for service-to-service calls.

### Message Brokers
- Asynchronous communication via intermediary (Kafka, RabbitMQ); services publish/subscribe to events/messages, enabling decoupling and resilience.

## 7. Building Microservices with Node.js

### Independent Services
- Each microservice is its own Node.js app with its own server, dependencies, and deployment pipeline, communicating via REST/gRPC/messaging.

### Database per Service Pattern
- Each microservice has its own dedicated database to ensure loose coupling and independent scalability; no direct cross-service DB access — services communicate via APIs/events only.

## 8. Monolith to Microservices Case Study
- Typical migration path: identify bounded contexts within monolith → extract one module at a time into a separate service (Strangler Fig pattern) → set up API gateway/communication → gradually decompose data store → use feature flags/parallel running to ensure smooth transition with minimal downtime.

---

# UNIT 5: Advanced API Development and Microservices

## 1. API Security

### Basic Authentication
- Username & password sent in `Authorization` header, Base64-encoded (not encrypted) — must be used with HTTPS; simple but less secure for production APIs.

### OAuth 2.0
- Authorization framework allowing third-party apps limited access to a user's resources without exposing credentials.
- Roles: Resource Owner, Client, Authorization Server, Resource Server.
- Flow: client gets an access token (via various grant types: authorization code, client credentials, etc.) from auth server, then uses token to access resource server.

### JWT Authentication
- Stateless token-based auth: server issues signed JWT after login; client sends token with each request; server verifies signature (no session storage needed).

### Role-Based Access Control (RBAC)
- Access permissions assigned based on user roles (admin, user, editor, etc.).
- Middleware checks user's role/claims (often from JWT payload) before allowing access to specific routes/actions.

## 2. Performance Optimization

### Redis Caching
- Redis = in-memory key-value data store, used for caching frequently accessed data to reduce DB load and improve response time.
- Common patterns: cache-aside (check cache first, fallback to DB then populate cache), TTL (time-to-live) for cache expiry.

### API Rate Limiting
- (See Unit 2 notes) — controls request frequency per client to prevent abuse and ensure fair usage; can use Redis to track counts across distributed servers.

### Query Optimization
- Writing efficient database queries: select only needed fields, avoid N+1 query problems, use proper filters, batch operations, analyze query execution plans.

### Database Indexing
- Indexes are data structures that speed up data retrieval on specific fields (like a book's index), at the cost of extra storage and slower writes.
- Common types: single-field index, compound index, unique index, text index (MongoDB).
- Use `explain()` to check if queries use indexes efficiently.

## 3. Testing APIs & Microservices

### Postman Documentation
- Postman allows creating, organizing, and documenting API collections (requests, examples, descriptions) that can be shared with teams or published publicly.

### End-to-End Testing (Postman)
- Writing test scripts (JavaScript) within Postman requests to validate responses (status codes, body structure, values).
- Can chain requests, use environment variables, and run automated test suites/collections (via Postman Runner or Newman CLI) to simulate real user workflows.

## 4. Deployment

### Render
- Cloud platform-as-a-service (PaaS) for deploying web apps/APIs directly from a Git repository, with automatic builds/deploys, free SSL, and easy environment variable configuration — simpler alternative to manually configuring servers.

## 5. Scaling Applications

### Docker
- (See Unit 3 notes) — used in deployment/scaling pipelines to containerize the app for consistent deployment across environments, easily integrated into CI/CD pipelines and orchestrated with Kubernetes or run on PaaS platforms like Render.

---

# Quick-Fire Revision Checklist
- HTTP methods + status codes
- Event loop & Node core modules (fs, http, path, events)
- Express middleware, routing, error handling
- Joi validation, Mongoose schemas/models
- Route vs query parameters, pagination, sorting, search
- JWT auth flow, RBAC, OAuth 2.0 basics
- Rate limiting, security basics (helmet, CORS, HTTPS)
- Monolith vs Microservices, scaling (vertical/horizontal)
- Load balancing, caching, replication, sharding
- Service communication: REST vs gRPC vs message brokers
- DDD, bounded contexts, database-per-service
- Docker (containerization) vs Kubernetes (orchestration)
- Redis caching, query optimization, indexing
- Postman testing, Render deployment
